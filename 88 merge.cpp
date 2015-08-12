void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 

{

	vector<int> v;

	if( m == 0 ) 

	{

		nums1.clear();

		for(int i=0;i<n;i++)

			nums1.push_back(nums2[i]);

		return;

	}

	if( n == 0 )

		return;



	int i=0,j=0;

	while(i<m || j<n)

	{ 

		if( i<m && (j==n || nums1[i]<=nums2[j] ) ) 

		{

			v.push_back(nums1[i]);

			i++;

		}

		else if( j<n && (i==m|| nums1[i]>nums2[j]) )

		{

			v.push_back(nums2[j]);

			j++;

		}

	}

    

	nums1.clear();

	for(int k = 0;k<v.size();k++)

		nums1.push_back(v[k]);

}