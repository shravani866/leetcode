class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, n = height.size();
        int i = 0,j = n-1;
        int max = 0;
        while(i < j){
            int area = min(height[i],height[j]) * (j - i);
            if( area > max){
                max = area;
            }
           else if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }
        }
        return max;
    }
};