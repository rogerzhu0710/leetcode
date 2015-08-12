bool search(vector<int>& nums, int target)
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
				return true;

			mid = (beg + end )/2;
		}
		else if( nums[beg] >= nums[end] )
		{
			// 6 7 0 1 2 4 5
			// 2 4 5 6 7 0 1
            // 2 2 5 6 7 0 2
			if( nums[mid] >= nums[beg] )
			{
				if( target > nums[mid] )
				{
                    if( nums[mid] == nums[beg] )
                    {
                        for(int i = beg; i < mid; i++)
                        {
                            if(nums[i] != nums[i+1]) { beg = i; break; }
                            if(i+1 == mid) beg = mid;
                        }

                        for(int j = end; j > mid; j--)
                        {
                            if(nums[j] != nums[j-1]) { end = j; break; }
                            if(j-1 == mid) end = mid;
                        }
                    }
                    else beg = mid;
                }
				else if( target < nums[mid] )
				{
					if( target < nums[beg] )
						beg = mid;
					else if( target > nums[beg] )
						end = mid;
					else return true;
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
					else return true;
				}
				else if( target < nums[mid] )
					end = mid;
				else if( target == nums[mid] )
					return true;
			}
			mid = (beg + end)/2;
		}
	}
	if(nums[beg] == target) return true;
	else if(nums[end] == target) return true;
	else return false;

}