string countAndSay(int n) {
    string res = "1";

    for(int i = 0; i < n-1; i++)
    {
        string number = "";
        for(int j = 0; j < res.length();)
        {
            char num = res[j];
            int count = 1;
            while( j < res.length() &&
                   res[j] == res[j+1] )
            {
                count++;
                j++;
            }

            if(res[j] != res[j+1])
            {
                stringstream ss;
                ss << count;
                number += ss.str();
                number += num;
                j++;
            }
        }
        res = number;
    }

    return res;
}
