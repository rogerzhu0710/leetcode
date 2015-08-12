int trailingZeroes(int n) {

        int result = 0;

        while(n/5)

        {

            n=n/5;

            result+=n;

        }

        return result;

    }