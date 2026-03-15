class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string s : words){
            
            int left = 0;
            int right = s.size() - 1;
            bool isPal = true;

            while(left < right){
                if(s[left] != s[right]){
                    isPal = false;
                    break;
                }
                left++;
                right--;
            }

            if(isPal)
                return s;
        }

        return "";
    }
};