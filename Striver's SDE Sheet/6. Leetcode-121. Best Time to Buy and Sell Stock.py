#Leetcode https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxi=0
        curr=0
        for i in range(1,len(prices)):
            curr+=prices[i]-prices[i-1]
            if curr<0:
                curr=0
            maxi=max(maxi,curr)    
        return maxi
  
