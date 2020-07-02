class Solution:
    
    def calc(self, arr):
        return sqrt(pow(arr[0],2) + pow(arr[1],2))
    
    def kClosest(self, points: List[List[int]], K: int) -> List[List[int]]:
        result = defaultdict(list)
        for i in points:
            result[self.calc(i)].append(i)
        
        b = defaultdict(list)
        for i in sorted(result.keys()):
            b[i] = result[i]
        ans = []
        for i in b.keys():
            if len(b[i]) > 1:
                for j in b[i]:
                    ans.append(j)
            else:
                ans.append(*b[i])
        
        print(ans)
        return ans[:K]