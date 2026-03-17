class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;

        for(int i=0;i<nums.size();i++) {
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }

        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());

        int i = 0;
        int j = 0;
        while(i < nums.size()) {
            if(i%2==0) {
                nums[i++] = even[j++]; 
            }
            else i++;
        }

        i=0;
        j=0;
        while(i < nums.size()) {
            if(i%2!=0) {
                nums[i++] = odd[j++];
            }
            else i++;
        }

        return nums;
    }
};