bool containsDuplicate(int* nums, int numsSize) {

    for(int i=0;i<numsSize-1;i++)

    {

        for(int m=i;m<numsSize-1;m++)

        {

            if(nums[i] == nums[m+1]) return true;

        }

    }

    return false;

}