//leetcode-18. 4Sum
//https://leetcode.com/problems/4sum/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target1=target-nums[j]-nums[i];
                int first=j+1;
                int last=n-1;
                while(first<last){
                    int sum_two=nums[first]+nums[last];
                    if(sum_two<target1) first++;
                    else if(sum_two>target1) last--;
                    else{
                        vector<int>v1(4,0);
                        v1[0]=nums[i];
                        v1[1]=nums[j];
                        v1[2]=nums[first];
                        v1[3]=nums[last];
                        v.push_back(v1);
                        while(first<last && nums[first]==v1[2]) first++;
                        while(first<last && nums[last]==v1[3]) last--;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) j++;
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return v;
    }
};
