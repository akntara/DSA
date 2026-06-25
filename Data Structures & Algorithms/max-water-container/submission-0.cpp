class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int left=0;
        int max_area=0;
        while(left<right)
        {
            int width=right-left;
            int current_water=min(height[left],height[right]);
            int current_area= width * current_water;
             max_area=max(max_area,current_area);
            if(height[left]<height[right])
             {
                left++;
             }
             else
             {
                right--;
             }
        }
        return max_area;
        
    }
};
