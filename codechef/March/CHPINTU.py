# cook your dish here
from collections import defaultdict
T = int(input())
for x in range(T):
    N , M = map(int,input().split())
    F = list(map(int,input().split()))
    P = list(map(int,input().split()))
    count = defaultdict(list)
    for i in range(M):
        count[i+1] = [0,0]
    for i,y in enumerate(F):
        count[y][0] = count[y][0] + P[i]
        count[y][1] = count[y][1] + 1
    # print(count)
    val = count.values()
    # print(val)
    min_val = 9999
    for i in val:
        if i[0]<min_val and i[1] > 0:
            min_val = i[0]
    print(min_val)
    # if min_val!=9999:
    #     print(min_val)
    # else:
    #     print(0)
        
        
        
        
        
        
    
    