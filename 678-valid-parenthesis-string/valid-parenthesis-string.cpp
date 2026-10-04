class Solution {
public:
    bool checkValidString(string s) {
        int maxc = 0, minc = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('){
                maxc++;
                minc++;
            }
            else if(s[i]==')'){
                maxc--;
                if(minc>0) minc--;
                if(maxc<0) return false;
            }
            else if(s[i]=='*'){
                maxc++;
                if(minc>0) minc--;
            }
        }
        if(minc==0) return true;
        else return false;
    }
};