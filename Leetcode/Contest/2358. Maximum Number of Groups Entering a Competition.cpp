class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n=grades.size();
        int a=-1+(int)sqrt(1+4*(n*2));
        return a/2;
    }
};
