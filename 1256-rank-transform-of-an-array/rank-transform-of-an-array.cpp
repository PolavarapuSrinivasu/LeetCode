class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>dum = arr;
        map<int,int>mpp;
        for(int i=0;i<dum.size();i++){
            mpp[dum[i]]=1;
        }
        vector<int>dum1;
        for(int i=0;i<dum.size();i++){
            if(mpp[dum[i]]==1){
                dum1.push_back(dum[i]);
                mpp[dum[i]]=0;
            }
        }
        dum = dum1;
        sort(dum.begin(),dum.end());
        for(int i=0;i<dum.size();i++){
            if(mpp[dum[i]]==0) mpp[dum[i]]=i+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};