    bool isPalindrome(int x) {

        if(x<0) return false;

             int xAlias = x;

     int div = 10;

     int revX = 0;

     while(xAlias != 0)

     {

        revX *= 10;

        revX += xAlias%div;

        xAlias = xAlias/10;

     } 

     if(revX == x) return true;

     else return false;

    }