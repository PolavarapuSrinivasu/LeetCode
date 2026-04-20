class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j = colors.size() - 1;
        while (i < j) {
            if (colors[i] != colors[j])
                break;
            else
                j--;
        }

        int val1 = j - i;

        i = 0;
        j = colors.size() - 1;
        while (i < j) {
            if (colors[i] != colors[j])
                break;
            else
                i++;
        }
        int val2 = j - i;
        ;

        return max(val1, val2);
    }
};