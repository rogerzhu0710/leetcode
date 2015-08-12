bool isValid(string s) {

    stack<char> sta;

	bool isPushed = false;

	for(int i=0;i<s.length();i++)

	{

		if(s[i]=='(' || s[i]=='[' || s[i]=='{')

		{

			sta.push(s[i]);

			isPushed = true;

		}

		

		if(s[i]==')')

		{

			if(sta.empty()) return false;

			else

			{

				if(sta.top()=='(')

					sta.pop(); 

				else return false;

			}

		}



		if(s[i]==']')

		{

			if(sta.empty()) return false;

			else

			{

				if(sta.top()=='[')

					sta.pop(); 

				else return false;

			}

		}



		if(s[i]=='}')

		{

			if(sta.empty()) return false;

			else

			{

				if(sta.top()=='{')

					sta.pop(); 

				else return false;

			}

		}

		 

	}

	if(sta.empty()&&isPushed)

		return true;

	else

		return false;

    }