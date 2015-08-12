 int removeElement(vector<int>& nums, int val) {

    for(vector<int>::iterator iter=nums.begin(); iter!=nums.end(); )

    {

        if( val==*iter )

            iter == nums.erase(iter);

        else

            iter++;

    }



    return nums.size(); 

    }