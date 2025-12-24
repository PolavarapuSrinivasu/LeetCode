class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(), capacity.rend());
        int sum = 0;
        for(auto val : apple) sum+=val;
        int csum = 0;
        int count = 0;
        for(auto val : capacity){
            csum+=val;
            count++;
            if(csum >= sum) break;
        }
        return count;
    }
};