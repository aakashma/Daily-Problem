class Solution {
public:
    static bool mycmp(pair<char,int>&p1,pair<char,int>&p2){
        return p1.second>p2.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++) m[s[i]]++;
        vector<pair<char,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),mycmp);
        string news="";
        for(auto x:v){
            for(int i=0;i<x.second;i++) news+=x.first;
        }
        return news;
        
    }
};
