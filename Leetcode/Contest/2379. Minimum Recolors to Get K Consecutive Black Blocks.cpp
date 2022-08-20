class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        string s=blocks;
        int n=blocks.size();
        int cnt=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W') cnt++;
        }
        int mini=INT_MAX;
        mini=min(mini,cnt);
        int start=0;
        for(int i=k;i<n;i++){
             if(s[start++]=='W') cnt--;
             if(s[i]=='W') cnt++;
             mini=min(mini,cnt);
        }
        return mini;
    }
};
