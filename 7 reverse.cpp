int reverse(int x)

{

    int c=0;

    while(x!=0)

    {

        int tmp = x%10;

        // inspire by the Internet knowledge

        if(c>0)

        {

            if( c > INT_MAX/10 ) return 0;

            else if(c == INT_MAX/10 && tmp>INT_MAX%10) return 0;

        }

        else

        {

            if( c < INT_MIN/10 ) return 0;

            else if(c == INT_MIN/10 && tmp<INT_MIN%10) return 0;

        }



        c = c*10 +tmp;

        x=x/10;

    }



    return c;

}