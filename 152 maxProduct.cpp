int MinTwo(int a,int b)
{
    return a>b?b:a;
}

int MaxTwo(int a,int b)
{
    return a>b?a:b;
}

int maxProduct(vector<int>& nums) {
     if (nums.size() == 1)
         return nums[0];

	int max_local = nums[0];
	int min_local = nums[0];
	int global = nums[0];
	int all = nums[0];

	for(int i=1;i<nums.size();i++)
	{
        int max_copy = max_local;
        max_local = MaxTwo(MaxTwo(nums[i],max_local*nums[i]),min_local*nums[i]);
        min_local = MinTwo(MinTwo(max_copy*nums[i],nums[i]),min_local*nums[i]); 
        global = MaxTwo(max_local,global);
	} 
	return global;
}
 