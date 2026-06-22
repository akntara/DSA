class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0 ,i=0;
       while(i< s.length() && j<t.length())
        {
            if(t[j]==s[i])
            {
                i++;
            }
            j++;
        }
        return i==s.length();
        
    }
};