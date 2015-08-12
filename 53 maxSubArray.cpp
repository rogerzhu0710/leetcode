int maxSubArray(vector<int>& nums) {

    int max = nums[0];

    int sum = 0;

    for(int i=0;i<nums.size();i++)

    {

        sum += nums[i];

        if(sum<0)

        {

            if(max<sum) max = sum;

            sum = 0;

        }

        else

            if(max<sum) max = sum;

    }



    return max;

}