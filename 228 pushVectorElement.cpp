string pushVectorElement(int start,int finish)

{

    stringstream s;

    if(start == finish)

    {

        string strTmp;

        s.clear();

        s<<start;

        s>>strTmp;

        return strTmp;

    }

    else

    {

        string strTmpStart;

        s.clear();

        s<<start;

        s>>strTmpStart;

        string strTmpEnd;

        s.clear();

        s<<finish;

        s>>strTmpEnd;



        return strTmpStart+"->"+strTmpEnd;



    }



}



vector<string> summaryRanges(vector<int>& nums)

{

    vector<string> v;

    stringstream s;



    if(nums.size() == 0) return v;

 



    int i = 0;

    int start = nums[i],finish = start;



    for(;i<nums.size()-1;i++)

    {

        if(nums[i+1] == nums[i]+1)

            finish = nums[i+1];

        else if(nums[i+1] == nums[i])

            continue;

        else

        {

            v.push_back(pushVectorElement(start,finish));

            start = nums[i+1];

            finish = start;

        }

    }



   v.push_back(pushVectorElement(start,finish));



    return v;

}