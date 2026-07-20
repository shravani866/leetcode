class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        int freq[26] ={0};
        for(int i = 0; i < n; i++){
            freq[sentence[i] - 'a']++;
        }
        int ans = -1;
        for(int i = 0; i < 26; i++){
            if(freq[i]==0){
                return false;
            }
        }
        return true;
   }
};