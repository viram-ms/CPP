class Solution:
    def reverseWords(self, s: str) -> str:
        arr = []
        temp = ""
        
        for i in range(len(s)):
            # print(arr)
            if(s[i] != " "):
                temp += s[i]
            if(i == len(s) - 1 and s[i] != " "):
                arr.insert(0,temp)
            if(s[i] == " " and temp != ""):
                arr.insert(0,temp)
                temp = ""
        result = ""
        
        for i,x in enumerate(arr):
            if(i != len(arr)-1):
                result = result + x + " "
            else:
                result += x
        return result
                
        