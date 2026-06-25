class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int sum=0;
        int i=0;
        int count=0;
        while(i<n)
        {
             
            sum = (details[i][11] - '0') * 10 + (details[i][12] - '0');
           
            if(sum>60)
            {
                count++;
                
            
            }
            sum=0;
            i++;
        }
        return count;
    }
};