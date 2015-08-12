int singleNumber(vector<int>& nums)

{

    int beg = 0, fin = nums.size()-1;

    int level = 0x1;



    while(true)

    {

        int i = beg,j = fin;

        int size = j-i+1;





        while(i<j)

        {

            if( (nums[i]&level) == level)

            {

                int tmp = nums[i];

                nums[i] = nums[j];

                nums[j] = tmp;

                j--;

            }

            else i++;

        }



        



        if( (nums[i]&level) == level )

        {

            if(i%2==0)

                beg = i;

            else

                fin = i-1;

        }

        else

        {

            if(i%2==0)

                fin = i;

            else

                beg = i+1;

        }

        

        if(fin-beg==1)

        {

            if( (nums[fin]&level) == level ) return nums[fin];

            else return nums[beg];

        }

        else if(fin-beg==0)

            return nums[fin]; 

            

        level*=2;

    }

}