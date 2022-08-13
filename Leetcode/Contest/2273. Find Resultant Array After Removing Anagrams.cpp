class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>v;
        string s1=words[0];
        sort(s1.begin(),s1.end());
        v.push_back(words[0]);
        for(int i=1;i<words.size();i++){
           string s2=words[i];
            sort(s2.begin(),s2.end());
           if(s1!=s2){
               v.push_back(words[i]);
               s1=s2;
           }
        }
        return v;
    }
};
