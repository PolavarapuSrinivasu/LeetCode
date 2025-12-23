class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minabs = abs(arr[0]-arr[1]);
        vector<vector<int>>ans;
        for(int i=0;i<arr.size()-1;i++) {
            minabs = min(minabs, abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<arr.size()-1;i++) {
            if(abs(arr[i]-arr[i+1])==minabs) ans.push_back({arr[i],arr[i+1]});
        }
        return ans;
    }
};