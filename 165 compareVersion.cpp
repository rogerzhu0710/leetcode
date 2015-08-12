int compareVersion(string version1, string version2)
{
    vector<string> s1,s2;
    vector<int> a1,a2;
    size_t index1 = 0,index2 = 0;
    while(index1!=string::npos)
    {
        index1= version1.find('.');
        s1.push_back(version1.substr(0,index1));
        version1 = version1.substr(index1+1);
    }

    while(index2!=string::npos)
    {
        index2= version2.find('.');
        s2.push_back(version2.substr(0,index2));
        version2 = version2.substr(index2+1);

    }

    for(int i=0;i<s1.size();i++)
    {

        a1.push_back(atoi(s1[i].c_str()));
    }
    for(int i=0;i<s2.size();i++)
    {

        a2.push_back(atoi(s2[i].c_str()));
    }
    bool isBig = a1.size()>a2.size()?true:false;

    if(isBig)
    {
        for(int j=0;j<a1.size()-a2.size();j++)
            a2.push_back(0);
    }
    else
    {
        for(int j=0;j<a2.size()-a1.size();j++)
            a1.push_back(0);
    }

    for(int k=0;k<a1.size();k++)
    {
        if(a1[k]<a2[k]) return -1;
        else if(a1[k]>a2[k]) return 1;
    }

    return 0;


}