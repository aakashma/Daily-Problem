#leetcode 56.Merge Intervals 
#https://leetcode.com/problems/merge-intervals/
class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        l=[]
        temp=intervals[0]
        for i in range(len(intervals)):
            if(intervals[i][0]<=temp[1]):
                temp[1]=max(intervals[i][1],temp[1])
            else:
                l.append(temp)
                temp=intervals[i]
        l.append(temp)
        return l
            
            
            
