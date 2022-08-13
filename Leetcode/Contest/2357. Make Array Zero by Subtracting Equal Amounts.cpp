class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums){
            if(x!=0) m[x]++;
        }
        return m.size();
    }
};
