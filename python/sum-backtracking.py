class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        legend = []
        ans = []
        self.solution(candidates,target,legend,ans,0)
        return ans
    
    def solution(self,candidates,target,legend,ans,index):
        print(legend,index)
        if target < 0:
            return
        if target == 0:
            ans.append(legend)
            return
    
        for i in range(index, len(candidates)):
            self.solution(candidates,target-candidates[i],legend+[candidates[i]],ans,i)
            