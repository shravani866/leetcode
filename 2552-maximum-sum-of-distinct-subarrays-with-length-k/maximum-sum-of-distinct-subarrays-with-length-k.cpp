class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,long long>mp;
       int i = 0, j = 0;
       long long sum = 0;
       long long ans = 0;
       int n = nums.size();
       for(j=0;j<k;j++){
        sum+=nums[j];
        mp[nums[j]]++;
       }
       if(mp.size()==k){
        ans=sum;
       }
       for( ; j < n; j++){
        sum += nums[j];
        mp[nums[j]]++;
       
      
        sum -= nums[i];
        mp[nums[i]]--;
        if(mp[nums[i]]==0){
           mp.erase(nums[i]);
        }
        i++;
    
        
            if(mp.size()==k){
                ans = max(ans,sum);
            }
       }
    return ans;
 
       
       
    }
};