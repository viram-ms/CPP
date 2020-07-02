# cook your dish here
T = int(input())
for i in range(T):
    n , k = map(int,input().split())
    A = list(map(int,input().split()))
    c = 0 
    modulus = []
    addition = []
    for i,x in enumerate(A):
        modulus.append(x % k)
        val = k - (x%k)
        if val == k:
            addition.append(0)
        else:
            addition.append(val)
    while c <= n:
        mod_sum = 0
        if c==0:
            mod_sum = sum(modulus[:n])
            if mod_sum == 0:
                print(mod_sum)
                break
        c = c+ 1
        addition_sum=0
        mod_sum = sum(modulus[:c])
        addition_sum = sum(addition[c:])
        # print(mod_sum, addition_sum)
        if mod_sum >= addition_sum and addition_sum!=0:
            print(mod_sum - addition_sum)
            break
        if c == n and addition_sum==0:
            mod_sum = 0
            for x in range(c):
                mod_sum = mod_sum + modulus[x]
            print(mod_sum)
            break
        
            
        
        
        