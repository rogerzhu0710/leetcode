string convert(string text, int nRows)
{
        if (nRows <= 1 || text.length() == 0)
           return text;

        string res = "";
        int len = text.length();
        for (int i = 0; i < len && i < nRows; ++i)
        {
            int indx = i;
            res += text[indx];

            for (int k = 1; indx < len; ++k)
            {

                if (i == 0 || i == nRows - 1)
                {
                    indx += 2 * nRows - 2;
                }
                else
                {
                    if (k & 0x1)
                        indx += 2 * (nRows - 1 - i);
                    else indx += 2 * i;
                }

                if (indx < len)
                {
                    res += text[indx];
                }
            }
        }
        return res;

/*
    string res = "";
    if( nRows >= text.size() ) return text;
    if( nRows == 1 ) return text;

    for( int i = 0; i < nRows; i++)
    {
        int j = i;
        if( i == 0 || i == nRows-1)
        {
            while(j < text.length())
            {
                res += text[j];
                j += 2*nRows - 2;
            }
        }
        else
        {
            while(j < text.length())
            {
                res += text[j];
                j += 2*nRows -2 -2*i;
                res += text[j];
                j += 2*i;
            }
        }
    }

    return res;
*/
}
