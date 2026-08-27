class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int c[101] = {0};
        for(int num : nums){
            c[num]++;
        }
        int sum = 0;
        for(int num : nums){
            if(c[num] == 1){
                sum += num;
            }
        }
        return sum;
    }
};