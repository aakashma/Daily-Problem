//Leetcode
//https://leetcode.com/problems/longest-consecutive-sequence/
//unordered_set is used
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int maxi=0;
        for(auto x:nums){
            if(!s.count(x-1)){
                int curr=x;
                int c=1;
                while(s.count(curr+1)){
                    curr++;
                    c++;
                }
                maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};
