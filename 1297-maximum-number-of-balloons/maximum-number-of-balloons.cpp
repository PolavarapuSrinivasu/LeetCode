class Solution {
public:
    int maxNumberOfBalloons(string text) {
      
        vector<int> freq(5, 0);
        
        for (char ch : text) {
            if (ch == 'b') freq[0]++;
            else if (ch == 'a') freq[1]++;
            else if (ch == 'l') freq[2]++;
            else if (ch == 'o') freq[3]++;
            else if (ch == 'n') freq[4]++;
        }

        int max_b = freq[0];
        int max_a = freq[1];
        int max_l = freq[2] / 2;
        int max_o = freq[3] / 2;
        int max_n = freq[4];

        return min({max_b, max_a, max_l, max_o, max_n});
    }
};
