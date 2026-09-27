class Solution {
public:
    int percentageLetter(string s, char letter) {
        int total = 0;
        int character = 0;

        for(char ch : s) {
            if(ch == letter) character++;
            total++;
        }

        cout << character << " " << total << endl;

        return (character * 100) / total;
    }
};