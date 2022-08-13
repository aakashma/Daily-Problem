class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int cnt=INT_MIN;
        cnt=max(cnt,special[0]-bottom);
        int n=special.size();
        for(int i=0;i<n-1;i++){
            cnt=max(cnt,special[i+1]-special[i]-1);
        }
        cnt=max(cnt,top-special[n-1]);
        return cnt;
    }
};
