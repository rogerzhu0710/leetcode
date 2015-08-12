string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";
    string emptyStr = "";
    //sort(strs.begin(),strs.end(),my_cmp);
    string strTmp = strs[0];
    int len = strTmp.length();
    bool bNotSame = false;
    int i=0;
    for( ; i<len; i++ )
    {
        if(strTmp[i]==NULL) break;
        for(int j=0;j<strs.size();j++)
        {
            string strTmp2 = strs[j];
            if(strTmp2[i] != strTmp[i])
            {
                bNotSame = true;
                break;
            }
        }
        if(bNotSame)
            break;
    }

    string s = strTmp.substr(0,i);
    return s;
}