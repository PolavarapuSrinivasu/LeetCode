class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> exp;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
                tokens[i] == "/") {
                int b = exp.top();
                exp.pop();
                int a = exp.top();
                exp.pop();
                if (tokens[i] == "+")
                    exp.push(a + b);
                if (tokens[i] == "-")
                    exp.push(a - b);
                if (tokens[i] == "*")
                    exp.push(a * b);
                if (tokens[i] == "/")
                    exp.push(a / b);
            } else {
                exp.push(stoi(tokens[i]));
            }
        }
        return exp.top();
    }
};