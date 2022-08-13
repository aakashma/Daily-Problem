class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int total=0;
        for(int i=1;i<=32;i++){
            int cnt=0;
            for(auto n:candidates){
                if(n&(1<<(i-1))) cnt++;
            }
            total=max(cnt,total);
        }
        return total;
    }
};
