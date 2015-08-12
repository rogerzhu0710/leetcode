bool isPowerOfTwo(int n)

{

    if(n<=0) return false;

    int hiDigit = 0;

    while((n & 0x1)==0)

        n>>=1;



    if(n==1) return true;

    else return false;

}