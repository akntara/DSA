class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int diff=0;
        for(int i=1;i<s.length();i++)
        {
            diff=abs(s[i-1]-s[i]);
            sum=sum+diff;
        }
        return sum;
    }
};