int removeDuplicates(vector<int>& nums) {

    if(nums.size() == 0) return 0;

    int preValue = nums[0];

    vector<int>::iterator iter=nums.begin();

    iter++;

    while(iter!=nums.end())

    {

        if( preValue==*iter )

            iter == nums.erase(iter);

        else

        {

            preValue = *iter;

            iter++;

        }

    }



    return nums.size();

}