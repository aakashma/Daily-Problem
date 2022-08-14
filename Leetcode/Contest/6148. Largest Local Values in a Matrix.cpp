class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>v;
        for(int i=0;i<n-2;i++){
            vector<int>v1;
            for(int j=0;j<n-2;j++){
                int maxi=0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                       maxi=max(maxi,grid[k][l]); 
                    }
                }
                v1.push_back(maxi);
            }
            v.push_back(v1);
        }
        return v;
    }
};
