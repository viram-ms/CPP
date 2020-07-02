class Solution:
    def findSubsequences(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []
        self.dfs(nums,0,[],result)
        return result
    
    def dfs(self, nums, index, path, res):
        
        if len(path) >= 2 and path not in res:
            res.append(path)
            
        
        for i in range(index, len(nums)):
            if not path or path[-1] <= nums[i]: # increasing check
                self.dfs(nums, i+1, path +[nums[i]], res)
        
        