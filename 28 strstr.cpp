int strStr(string haystack, string needle)

{

    int c = -1;

    if(haystack == "" && needle == "") return 0;

    if(needle == "") return 0;

    if(haystack == "") return -1;

    bool bFound = false;

    int nLoop = haystack.length() - needle.length();

    for(int i=0;i<=nLoop;i++)

    {

        if(haystack[i] != needle[0])

            continue;

        else

        {

            c = i;

            for(int j=i;j<needle.size()+i;j++)

            {

                if(haystack[j]==needle[j-c])

                {

                    bFound =  true;

                    continue;

                }

                else

                {

                    bFound = false;

                    c = -1;

                    break;

                }

            }

            if(bFound) return c;

        }

    }

    return c;

}