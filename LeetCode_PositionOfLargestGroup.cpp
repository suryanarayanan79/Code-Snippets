class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>>v;
        if(S.size() <= 2) return v;
        int si = 0; int count = 0;
        for(int i = si ; i < S.size() - 1;i++){
            if(S[i] == S[i+1]){
                count++;
                if(i == S.size() - 2 && count >= 2){
                    vector<int> vv;
                    vv.push_back(si);
                    vv.push_back(si+count);              
                    v.push_back(vv);
                }
            }else{
                if(count >= 2 ){
                    vector<int> vv;
                    vv.push_back(si);
                    vv.push_back(si+count);              
                    v.push_back(vv);
                }
                 si = i+1;
                 count = 0;
            }
        }
        return v;
    }
};
