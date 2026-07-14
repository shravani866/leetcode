class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mp;
        while(n > 0) {
            int digit = n % 10;
            mp[digit]++;
            n = n/10;
        }
        int ans = 0;
        for(auto a: mp) {
           ans += a.first * a.second;
        }
        return ans;
        
    }
};