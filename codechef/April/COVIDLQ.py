# cook your dish here
from collections import Counter
import math
T= int(input())
for x in range(T):
    n= int(input())
    A = list(map(int,input().split()))
    B = []
    flag =False
    for i in range(len(A)):
        if A[i] == 1:
            B.append(i)
    for i in range(len(B)-1):
        if (B[i+1] - B[i]) >= 6:
            flag = False
        else:
            flag = True
            break
    if flag == False:
        print("YES")
    else:
        print("NO")
            
        
        
    
    