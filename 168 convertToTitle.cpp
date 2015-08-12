string convertToTitle(int n) {

    string c = "";

    const int diff = 65;

    while(n>0)

    {

        n=n-1;

        int IntChar = n%26;



        char tmp = (char)IntChar+diff;

        c = tmp+c;

        n/=26;



    }

    return c;

    }