class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;

        int prevAltitude = 0;

        for(auto val : gain) {
            prevAltitude = prevAltitude + val;

            maxAltitude = max(maxAltitude, prevAltitude);
        }

        return maxAltitude;
    }
};