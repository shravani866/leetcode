class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sing = 0;
        int dbl = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 10){
                sing += nums[i];

            }
            else {
                dbl += nums[i];
            }
        }
        if(sing > dbl){
            return true;
        }
        else if(dbl > sing){
            return true;
        }
        else{
            return false;
        }
        
    }
};