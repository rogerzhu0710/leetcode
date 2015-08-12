void rotateReal(vector<int>& nums,int beg,int fin)

{

    int len = fin-beg;

    if(len < 0 ) return;

    if(len == 1 || len == 0) return;

    else if(len == 2)

    {

        int tmp = nums[beg];

        nums[beg] = nums[fin-1];

        nums[fin-1] = tmp;

        return;

    }



    rotateReal(nums,beg,beg+len/2);

    if(len%2==0)

        rotateReal(nums,beg+len/2,fin);

    else

        rotateReal(nums,beg+len/2+1,fin);

    //rotateReal(nums,0,len);

    for(int i=beg;i<beg+len/2;i++)

    {

        int tmp = nums[i];

        if(len%2 == 0)

        {

            nums[i] = nums[i+len/2];

            nums[i+len/2] = tmp;

        }

        else

        {

            nums[i] = nums[i+len/2+1];

            nums[i+len/2+1] = tmp;

        }

    }



}



void rotate(vector<int>& nums, int k)

{

    int len = nums.size();

    k=k%len;

    if(k==0) return;

    rotateReal(nums,0,len-k);

    rotateReal(nums,len-k,len);

    rotateReal(nums,0,len);

}