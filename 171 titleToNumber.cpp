    int titleToNumber(string s) 

    {

	int res = 0;

	const int diff = 64;

	int len = s.size()-1;

	for(int i=len;i>=0;i--)

	{

		int level = 1;

		if(i==len) 

			res =  s[i] -diff;

		else

		{

			for(int j=len-i;j>0;j--)

				level*=26;

			res = res+level*(s[i]-diff);

		}

	}

	return res;

    }