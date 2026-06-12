class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,c=0,m=0;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i++];
                c++;
            }
            else{
                if(c>0){
                    power+=tokens[j--];
                    if(c>m) m=c;
                    c--;
                }
                else{
                    break;
                }
            }
            cout<<c<<" ";
        }
        if(m<c) m=c;
        return m;
    }
};