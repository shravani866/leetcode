class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 1 || k == 0) return 0;
        int i = 0, ans = 0, pro = 1;
        for(int j = 0; j < nums.size();j++){
           
            pro*=nums[j];
            
             while(pro >= k){
                pro/=nums[i];
                i++;
        }
        ans += (j - i + 1);
        }
        return ans;
    }
};