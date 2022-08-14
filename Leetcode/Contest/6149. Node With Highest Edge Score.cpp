class Solution {
public:
    static bool mycmp(pair<long long,long long>&p1,pair<long long,long long>&p2){
        if(p1.second==p2.second){
            return p1.first<p2.first;
        }
        return p1.second>p2.second;
    }
    int edgeScore(vector<int>& edges) {
        unordered_map<long long,long long>m;
        for(int i=0;i<edges.size();i++){
            m[edges[i]]+=i;
        }
        vector<pair<long long,long long>>v;
        for(auto x:m){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),mycmp);
        return v[0].first;
    }
};
