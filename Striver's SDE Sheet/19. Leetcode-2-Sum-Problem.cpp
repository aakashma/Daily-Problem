//Leetcode-1. Two Sum
//https://leetcode.com/problems/two-sum/
//cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
                break;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};
//python
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(len(nums)):
                if i!=j:
                    if nums[i]+nums[j]==target:
                        return [i,j]
