//leetcode 88. Merge Sorted Array
//https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        int *p=new int[m+n];
        while(i<m && j<n){
            if (nums1[i]<nums2[j]) p[k++]=nums1[i++];
            else p[k++]=nums2[j++];
        }
        for(;i<m;i++)  p[k++]=nums1[i];
        for(;j<n;j++) p[k++]=nums2[j];
        for(i=0;i<m+n;i++){
            nums1[i]=p[i];
        }
     }
};
