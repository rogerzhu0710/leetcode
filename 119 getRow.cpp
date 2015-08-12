    vector<int> getRow(int rowIndex) {

       vector<vector<int> > res;

	vector<int> v1;



	for(int i=0;i<=rowIndex;i++)

	{

		v1.clear();

		for(int k=0;k<=i;k++)

		{

			if(k==0 || k==i) v1.push_back(1);

			else

			{

				vector<int> tmpVec = res[i-1];

				v1.push_back(tmpVec[k-1]+tmpVec[k]);

			}

		}

		res.push_back(v1);

	}

	return res[rowIndex];

    }