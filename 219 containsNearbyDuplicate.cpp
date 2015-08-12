bool containsNearbyDuplicate(int* nums, int numsSize, int k) {

    for(int i=0;i<numsSize-1;i++)

    {

        int loopSize = k+i;

        if(k+i>numsSize-1) loopSize = numsSize-1;

        

        for(int m=i;m<loopSize;m++)

        {

            if(nums[i] == nums[m+1]) return true;

        }

    }

    return false;

}