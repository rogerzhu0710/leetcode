int romanToInt(string s) 

{

	int res = 0;

	if(s.length() == 1)

	{

		if(s[0] == 'I') return 1;

		if(s[0] == 'V') return 5;

		if(s[0] == 'X') return 10;

		if(s[0] == 'L') return 50;

		if(s[0] == 'C') return 100;

		if(s[0] == 'D') return 500;

		if(s[0] == 'M') return 1000;

	}



	for(int i=0;i<s.length();i++)

	{

		if(s[i] == 'M') res+=1000;

		else if(s[i] == 'D') res+=500;

		else if(s[i] == 'C') 

		{

			if(s[i+1] == 'D')

			{

				res = res + 500 - 100;

				i=i+1;

			}

			else if(s[i+1] == 'M')

			{

				res = res + 1000-100;

				i=i+1;

			}

			else 

				res = res + 100;

		}

		else if(s[i] == 'L') res+=50;

		else if(s[i] == 'X')

		{

			if(s[i+1] == 'L')

			{

				res = res + 50 - 10;

				i=i+1;

			}

			else if(s[i+1] == 'C')

			{

				res = res + 100-10;

				i=i+1;

			}

			else 

				res = res + 10;

		}

		else if(s[i] == 'V') res+=5;

		else if(s[i] == 'I')

		{

			if(s[i+1] == 'V')

			{

				res = res + 5 - 1;

				i=i+1;

			}

			else if(s[i+1] == 'X')

			{

				res = res + 10-1;

				i=i+1;

			}

			else 

				res = res + 1;

		}

	}



	return res;

}