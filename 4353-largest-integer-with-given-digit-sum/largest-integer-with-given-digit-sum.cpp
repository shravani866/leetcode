class Solution {
public:
    int largestInteger(int n, int s) {
         
        if (s > 9 * n)
            return -1;
        string ans = "";    

        while (n--) {
            int digit = min(9, s);
           ans += char(digit + '0');
           s -= digit;
        }

        return stoi(ans);
    }
};