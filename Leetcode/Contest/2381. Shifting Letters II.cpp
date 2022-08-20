class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>v(n+1,0);
        for(int i=0;i<shifts.size();i++){
            if(shifts[i][2]==0){
                v[shifts[i][0]]--;
                v[shifts[i][1] + 1]++;
            }
            else{
                 v[shifts[i][0]]++;
                v[shifts[i][1] + 1]--;
            }
        }
        for(int i=1;i<n;i++){
            v[i]=v[i]+v[i-1];
        }
        for(int i=0;i<n;i++){
            if(v[i]>=0){
                int a=v[i]%26;
                int b=(s[i]-'a'+a)%26;
                s[i]='a'+b;
            } 
            else{
                int a=(-1*v[i])%26;
                int b=(s[i]-'a'-a);
                if(b<0){
                    b=26+b;
                    s[i]='a'+b;
                }
                else{
                    s[i]='a'+b;
                }
            }
        }
        return s;
    }
};
