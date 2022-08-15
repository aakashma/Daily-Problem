//Leetcode 229. Majority Element II
//https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int a=n/3;
        unordered_map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        vector<int>v;
        for(auto x:m){
            if(x.second>a) v.push_back(x.first);
        }
        return v;
    }
};
