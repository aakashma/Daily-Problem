class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>v;
        map<int,int>m;
        for(int i=0;i<items1.size();i++){
            m[items1[i][0]]+=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            m[items2[i][0]]+=items2[i][1];
        }
        for(auto x:m){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end());
        return v;
    }
};
