string RemoveNoNumAl(string s)

{

    string res = "";



    for(int i=0;i<s.size();i++)

    {

        bool bLower = (s[i]>='a' && s[i]<='z');

        bool bUpper = (s[i]>='A' && s[i]<='Z');

        bool bNumber = (s[i]>='0' && s[i]<='9');

        if(bUpper) s[i]=tolower(s[i]);

        if( bLower || bUpper || bNumber )

            res+=s[i];

    }

    return res;

}



bool isPalindrome(string s) {

    string newStr = RemoveNoNumAl(s);



    if(newStr.size() == 0) return true;



    int j = newStr.size()-1;

    for(int i=0;i<newStr.size()/2;i++)

    {

        if(newStr[i] != newStr[j]) return false;

        j--;

    }

    return true;

}