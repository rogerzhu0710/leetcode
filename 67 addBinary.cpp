string addBinary(string a, string b) {

     string c="";

     int lenA = a.length();

     int lenB = b.length();

     int len  = 0;



     if(lenA>lenB)

     {

        len = lenA;

        for(int i=0;i<lenA-lenB;i++)

            b = "0"+b;

     }

     else

     {

        len = lenB;

        for(int i=0;i<lenB-lenA;i++)

            a = "0"+a;

     }



     bool bAddOne = false;

     for(int i=len;i>=0;i--)

     {

        if(a[i]=='1')

        {

            if(b[i]=='0' && bAddOne)

            {

                c="0" + c;

                bAddOne = true;

            }

            else if(b[i]=='0' && !bAddOne)

            {

                c = "1" + c;

                bAddOne = false;

            }

            else if(b[i]=='1' && bAddOne)

            {

                c = "1" + c;

                bAddOne = true;

            }

            else if(b[i]=='1' && !bAddOne)

            {

                c = "0" + c;

                bAddOne = true;

            }

        }

        else if(a[i]=='0')

        {

            if(b[i]=='0' && bAddOne)

            {

                c="1" + c;

                bAddOne = false;

            }

            else if(b[i]=='0' && !bAddOne)

            {

                c = "0" + c;

                bAddOne = false;

            }

            else if(b[i]=='1' && bAddOne)

            {

                c = "0" + c;

                bAddOne = true;

            }

            else if(b[i]=='1' && !bAddOne)

            {

                c = "1" + c;

                bAddOne = false;

            }

        }

     }



	 if(bAddOne) c="1"+c;

     if(c=="") return "0";

     return c;

}