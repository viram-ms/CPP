class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        a = defaultdict(list)
        for i in arr:
            x = Counter(bin(i)[2:])
            if '1' in x.keys():
                a[x['1']].append(i)
            else:
                a[0].append(i)
        b = {}
        result = []
        for i in sorted(a.keys()):
            b[i] = a[i]
        for i in b.values():
            temp = sorted(i)
            for ele in temp:
                result.append(ele)
        return result
            
        
        