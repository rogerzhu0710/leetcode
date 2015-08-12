int lengthOfLastWord(string s)
{
    int begIndex = s.length()-1;
    for(int j = s.length()-1;j>=0;j--)
    {
        if(s[j] == ' ')  begIndex--;
        else break;
    }
    int count = 0;
    for(int i = begIndex;i>=0;i--)
    {
        if(s[i] != ' ')
            count++;
        else
            break;
    }
    return count;
}