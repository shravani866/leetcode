class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s;
        // int n = nums.size();
        // int s = n*(n+1)/2;
        // int sum = 0;
        // for(int i = 0; i < n; i++){
        //     sum=sum+nums[i];
        // }
        int n = nums.size();
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }
        for(int i = 0; i <=n; i++){
            if(s.count(i)==0){
            return i;

        }
        
        }
        
      return 0;  
    }
};