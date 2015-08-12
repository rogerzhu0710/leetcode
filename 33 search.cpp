int search(vector<int>& nums, int target)

{

	int beg = 0, end = nums.size()-1;

	int mid = (beg + end)/2;



	while(end-beg>1)

	{

		if( nums[beg] < nums[end] )

		{

			if( target > nums[mid] )

				beg = mid;

			else if( target < nums[mid] )

				end = mid;

			else if( target == nums[mid] )

				return mid;



			mid = (beg + end )/2;

		}

		else if( nums[beg] > nums[end] )

		{

			// 6 7 0 1 2 4 5

			// 2 4 5 6 7 0 1

			if( nums[mid] > nums[beg] )

			{

				if( target > nums[mid] )

					beg = mid;

				else if( target < nums[mid] )

				{

					if( target < nums[beg] )

						beg = mid;

					else if( target > nums[beg] )

						end = mid;

					else return beg;

				} 

				else if( target == nums[mid] )

					return mid;

			}

			else if( nums[mid] < nums[beg] )

			{

				if( target > nums[mid] )

				{

					if( target > nums[beg] )

						end = mid;

					else if( target < nums[beg] )

						beg = mid;

					else return beg;

				} 

				else if( target < nums[mid] )

					end = mid;

				else if( target == nums[mid] )

					return mid;

			}

			mid = (beg + end)/2;

		}

	}

	if(nums[beg] == target) return beg;

	else if(nums[end] == target) return end;

	else return -1;



}