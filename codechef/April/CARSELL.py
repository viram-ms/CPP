# cook your dish here
T = int(input())
for x in range(T):
    mod = 1000000007
    n = int(input())
    P = list(map(int,input().split()))
    P = sorted(P,reverse=True)
    # print(P)
    profit = 0
    for i in range(n):
        if P[i] - i >= 0:
            P[i] = P[i] - i
        else:
            P[i] = 0
    # print(P)
    for i in range(n):
        profit = profit + P[i]
    # print(profit)
    print(profit % mod)
            
        
    
