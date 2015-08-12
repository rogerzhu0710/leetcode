    bool isIsomorphic(string s, string t) {

           int i = 0;

    string s1,t1;

    char key1 = 'a',key2 = 'a';

    map<char,char> m1,m2;

    while(i<s.length())

    {

        if(m1.find(s[i])==m1.end())

        {

            m1[s[i]] = key1;

            s1 += key1;

            key1++;

        }

        else

        {

            s1 += m1[s[i]];

        }

        if(m2.find(t[i])==m2.end())

        {

            m2[t[i]] = key2;

            t1 += key2;

            key2++;

        }

        else

        {

            t1 += m2[t[i]];

        }

        i++;

    }



    return s1==t1; 

    }