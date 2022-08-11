class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long long,long long>m;
        for(int i=0;i<n;i++){
             m[nums[i]-i]++;
        }
        long long cnt=0;
        for(auto x:m){
             long long a=x.second*(x.second+1);
             long long b=a/2;
            cnt+=b;
        }
        long long c=((long long)n*(long long)(n+1))/2;
        long long ans=c-cnt;
        return ans;
    }
};
