# cook your dish here
import collections
import math 
# def lcm(x, y):
#     return x * y // math.gcd(x, y)

# def countcoprime(arr,n):
#     count = 0
#     for x in arr:
#         if lcm(x,n) == x*n:
#             count += 1
#         else:
#             return False
#     if count == len(arr):
#         return True
def SieveOfEratosthenes(n): 
    prime = [True for i in range(n+1)] 
    p = 2
    nums = [1]
    while (p * p <= n): 
        if (prime[p] == True): 
            for i in range(p * p, n+1, p): 
                prime[i] = False
        p += 1
    for x in range(2,n+1):
        # print(nums)
        if prime[x] ==True:
            nums.append(x)
    return nums
        

T = int(input())
for x in range(T):
    n = int(input())
    nums = SieveOfEratosthenes(n)
    visited = [False]*(n+1)
    for x in nums:
        visited[x] = True
    ans = []
    ans.append(nums)
    for i in range(2,n):
        if visited[i] == False and visited[i+1] == False:
            visited[i] = True
            visited[i+1] = True
            ans.append([i,i+1])
        elif visited[i] == False:
            visited[i] = True
            ans.append([i])
    # for i in range(2,n+1):
        # if visited[i] == False:
            # ans.append([i])
    # print(len(visited))
    if visited[n] == False:
        ans.append([n])
    print(len(ans))
    for x in ans:
        print(len(x), *x , sep = ' ')
    
        
                        
                        
                
                    
            
        
    
    


        


        
                
            
        
        
