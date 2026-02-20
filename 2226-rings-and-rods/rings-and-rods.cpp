class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,int>R;
        unordered_map<int,int>G;
        unordered_map<int,int>B;
        for(int i = 0;i<rings.size();i+=2) {
            if(rings[i]=='R') R[rings[i+1]-'0']++;
            else if(rings[i]=='G') G[rings[i+1]-'0']++;
            else B[rings[i+1]-'0']++;
        }

        int cnt = 0;
        for(int i=0;i<=9;i++) {
            if(R[i]>0 and G[i]>0 and B[i]>0) cnt++;
        }

        return cnt;
    }
};