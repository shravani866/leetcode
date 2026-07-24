class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {

        if (start > destination) {
            swap(start, destination);
        }

        int clockwise = 0;
        int total = 0;

        
        for (int i = 0; i < distance.size(); i++) {
            total += distance[i];
        }

        
        for (int i = start; i < destination; i++) {
            clockwise += distance[i];
        }

        int counterclockwise = total - clockwise;

        return min(clockwise, counterclockwise);
    }
};