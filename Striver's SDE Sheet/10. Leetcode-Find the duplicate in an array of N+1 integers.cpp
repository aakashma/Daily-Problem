//leetcode 287. Find the Duplicate Number
//https://leetcode.com/problems/find-the-duplicate-number/
//cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
//python
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        l=[0]*100001
        for a in nums:
            l[a]+=1
        for i in range(len(l)):
            if l[i]>1:
                return i
