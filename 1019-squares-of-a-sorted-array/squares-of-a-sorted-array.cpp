class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1, X = n - 1;

        vector<int> ans(n);

        while (i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                ans[X] = nums[i] * nums[i];
                i++;
            } else {
                ans[X] = nums[j] * nums[j];
                j--;
            }
            X--;
        }

        return ans;
    }
};