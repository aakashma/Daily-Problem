//gfg
//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int total=0;
        int maxi=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            total+=A[i];
            if(total==0) maxi=i+1;
            else{
                if(m.find(total)!=m.end()){
                    maxi=max(maxi,i-m[total]);
                }
                else m[total]=i;
            }
        }
        return maxi;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
