int getSequreSum(int n)

{

    int res = 0;

    while(n!=0)

    {

       int tmp = n%10;

       res += tmp*tmp;

       n = n/10;

    }

    return res;

}



bool isValueInVecor(vector<int> &v,int n)

{

    for(int i=0;i<v.size();i++)

    {

        if(v[i]==n) return true;

    }

    return false;

}



bool isHappy(int n)

{

    int tmpN = n;

    vector<int> values;

    while(n!=1)

    {

        n = getSequreSum(n);

        if(isValueInVecor(values,n))

            return false;

        values.push_back(n);

    }

    return true;

}