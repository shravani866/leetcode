class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++)
        
         {
            int num = nums[i];
            int sum = 0;
            while (num != 0) {
                sum += num % 10;
                num /= 10;
            }
            minn = min(minn, sum);
        }
        
        return minn;
    }
};
