class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        v.push_back({1});
        if(numRows==1) return {{1}};
        else{
        vector<int>v1(1);
        for(int i=1;i<numRows;i++){
            vector<int>v2;
            v2.push_back(1);
            for(int j=0;j<v1.size()-1;j++){
                v2.push_back(v1[j]+v1[j+1]);
            }
           v2.push_back(1);
           v.push_back(v2);
           v1.resize(v2.size());
           for(int j=0;j<v2.size();j++){
               v1[j]=v2[j];
           } 
        }
            return v;
        }
    }
};
