class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        unordered_map<int, int> v1;
        unordered_map<int, int> v2;
        unordered_map<int, int> v3;

        for (auto val : nums1)
            v1[val] = 1;
        for (auto val : nums2)
            v2[val] = 1;
        for (auto val : nums3)
            v3[val] = 1;

        vector<int> ans;
        unordered_map<int, int> isPresent;
        for (auto val : nums1) {
            int sum = v1[val] + v2[val] + v3[val];
            if (sum >= 2 and isPresent[val] != 1) {
                ans.push_back(val);
                isPresent[val] = 1;
            }
        }

        for (auto val : nums2) {
            int sum = v1[val] + v2[val] + v3[val];
            if (sum >= 2 and isPresent[val] != 1) {
                ans.push_back(val);
                isPresent[val] = 1;
            }
        }

        return ans;
    }
};