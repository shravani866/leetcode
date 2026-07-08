class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
     
        int co = 0;
        for(int i = 0; i < n; i++){
               int c = 0;
            while(nums[i]!= 0){
                 int r = nums[i]% 10;
                c++;
                nums[i] /= 10;
                
            }
            if( (c&1)==0){
                co++;
            }
            }
        return co;
        
    }
        
    
};