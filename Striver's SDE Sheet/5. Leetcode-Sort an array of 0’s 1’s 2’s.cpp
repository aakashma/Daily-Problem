//Leetcode 75.sort colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3]={0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int i=0;
        for(;i<arr[0];i++){
            nums[i]=0;
        }
        for(;i<arr[1]+arr[0];i++){
            nums[i]=1;
        }
        for(;i<arr[2]+arr[1]+arr[0];i++){
            nums[i]=2;
        }
    }
};
