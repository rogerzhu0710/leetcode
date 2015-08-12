int climbStairs(int n)

{ 



    int res = 1;

    int preRes = res;

    for(int i = 1; i<n;i++)

    {

        int tmp = res;

        res = preRes+res;

        preRes = tmp;

    }

    return res;

// recursive mode

/*

    if(n==1) return 1;

    if(n==2) return 2;



    else return climbStairs(n-1) +  climbStairs(n-2);

*/

}