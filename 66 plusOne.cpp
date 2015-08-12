vector<int> plusOne(vector<int>& digits) 

{

	vector<int> res;

	int size = digits.size();

	if(size == 0) return res;

	bool bAddOne = true;

 

	for(int i=size-1; i>=0; i--)

	{

		if(bAddOne)

		{

			if(digits[i] == 9)

            {

				digits[i] = 0;

				bAddOne = true;

			}

			else

			{

				digits[i] += 1;

				bAddOne = false;

			}

		}

	}



	if(bAddOne)

		res.push_back(1);

	

	for(int j =0;j<digits.size();j++)

		res.push_back(digits[j]);



	return res;

}