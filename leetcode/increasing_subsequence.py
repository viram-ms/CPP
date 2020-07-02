class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        t = [1]*len(nums)
        
        for i in range(1,len(nums)):
            j = 0
            while j < i:
                if(nums[j] < nums[i]):
                    t[i] = max(t[i], t[j] + 1)
                j += 1
        
        return max(t)
        