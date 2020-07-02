class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        even = []
        odd = []
        for i in A:
            if i % 2 == 0:
                even.append(i)
            else:
                odd.append(i)
        even.sort()
        odd.sort()
        result = [0] * len(A)
        
        i = 0
        j = 0
        n = len(A)
        flag = True
        while(i + j < n):
            if flag:
                result[i+j] = even[i]
                i+=1
                flag = False
            else:
                result[i+j] = odd[j]
                j+=1
                flag = True
        return result
            