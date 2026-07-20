class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L = 0, R = 0, u = 0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'L'){
                L++;
            }
            else if(moves[i] == 'R'){
                R++;
            }
            else{
                u++;
            }
        }
        return abs(L-R)+u;
        
    }
};