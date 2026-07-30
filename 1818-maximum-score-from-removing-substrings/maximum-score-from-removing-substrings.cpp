class Solution {
public:
int rSubstring(string &s, char f, char se, int p){
    stack<char> st;
    int score = 0;

    for(char c : s){
        if(!st.empty() && st.top() == f && c == se){
            st.pop();
            score += p;
        }else{
            st.push(c);
        }
    }
     string temp = "";
        while (!st.empty()) {
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        s = temp;

    return score;

  }
    int maximumGain(string s, int x, int y) {
       int ans = 0;
       if(x >= y){
        ans += rSubstring(s , 'a' , 'b' , x);
        ans += rSubstring(s , 'b' , 'a' , y);

       }else{
        ans += rSubstring(s, 'b' , 'a' , y);
        ans += rSubstring(s, 'a' , 'b' , x);
       }
       return ans;

        
    }
};