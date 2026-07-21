class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int i = 0,j = 0;
      int n = nums.size();
      int sum = 0;
      for( ; j < k; j++){
        sum += nums[j];
      }
      int maxx = sum;
      for(  ; j < n; j++){
        sum -= nums[i];
        sum += nums[j];
        i++;
        maxx = max(maxx,sum);
      }
       return ((double)maxx/k);
    }
};