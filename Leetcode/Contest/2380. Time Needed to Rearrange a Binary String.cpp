class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=s.size();
        int cnt=0;
        while(1){
            bool flag=false;
            for(int j=0;j<n;j++){
                if(j+1<n && s[j]=='0' && s[j+1]=='1'){
                    flag=true;
                    s[j]='1';
                    s[j+1]='0';
                    j++;
                }
            }
                if(flag==true) cnt++;
                else break;
        }
        return cnt;
    }
};
