class Solution {
public:
    string decodeString(string s) {
        string str = "";
        int i = 0;

        stack<string> sst;
        stack<int> snt;

        while (i < s.size()) {

            if (isalpha(s[i])) {
                str += s[i];
                i++;
            }

            else if (isdigit(s[i])) {
                string n = "";
                while (i < s.size() && isdigit(s[i])) {
                    n += s[i];
                    i++;
                }
                snt.push(stoi(n));
            }

            else if (s[i] == '[') {
                sst.push(str); 
                str = "";    
                i++;
            }

            else if (s[i] == ']') {
                int c = snt.top();
                snt.pop();

                string prev = sst.top();
                sst.pop();

                string temp = "";
                while (c--) {
                    temp += str;
                }

                str = prev + temp;
                i++;
            }
        }

        return str;
    }
};