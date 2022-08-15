//Leetcode 169. Majority Element
//https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=0;
        int cnt=0;
        for(auto x:nums){
            if(cnt==0){
                ele=x;
            }
            if(x==ele){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
        }
        return ele;
    }
};
