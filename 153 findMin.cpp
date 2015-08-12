int findMin(vector<int>& nums){
	int beg = 0, end = nums.size()-1;
	int mid = (beg + end)/2;
	int min = nums[0];

	while(end-beg>1)
	{
		if( nums[beg] < nums[end] )
		{
			 if(min<nums[beg]) min = nums[beg];
			 break;
		}
		else if( nums[beg] > nums[end] )
		{
			// 6 7 0 1 2 4 5
			// 2 4 5 6 7 0 1
			if( nums[mid] > nums[beg] )
			{
				 beg = mid;
				 if(min<nums[end]) min = nums[end];
			}
			else if( nums[mid] < nums[beg] )
			{
				 end = mid;
				 if(min<nums[mid]) min = nums[mid];
			}
			mid = (beg + end)/2;
		}
	}
	if(nums[beg] < min ) min = nums[beg];
    if(nums[end] < min) min = nums[end];

    return min;

}
