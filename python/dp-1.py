class Solution:
    def climbStairs(self, n: int) -> int:
        dp = [0]*(n+2)
        dp[1] = 1
        dp[2] = 2
        if n == 1:
            return 1
        elif n==2:
            return 2
        elif n>2:
            for i in range(1,n):
                dp[i+2] = dp[i] + dp[i+1]
        
        return dp[n]
         