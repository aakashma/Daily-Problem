class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>v(26,0);
        char ans;
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            if(v[s[i]-'a']==2){
                ans=s[i];
                break;
            }
        }
        return ans;
    }
};
