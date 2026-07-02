class Solution {
public:
    int lengthOfLastWord(string s) {
       int n=s.length();
       int i=n-1;
       int count=0;
       while(s[i]==' ')
       {
        i--;
       }
        while(i>=0)
        {
            if(s[i]!=' ')
            {
                count++;
                i--;
            }else
            {
                break;
            }
        }
        return count;
    }
};