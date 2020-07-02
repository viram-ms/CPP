import math 
  
def primeFactors(n): 
    fact=list()
    while n % 2 == 0: 
        fact.append(2) 
        n = n / 2
          

    for i in range(3,int(math.sqrt(n))+1,2): 
        while n % i== 0: 
            fact.append(int(i)) 
            n = n / i 
              
    if n > 2: 
        fact.append(int(n))

    return(fact)
    
def strange():
    x,k=map(int,input().split())
    fact=primeFactors(x)
    if(len(fact)>=k):
        print(1)
    else:
        print(0)
        
t=int(input())
for _ in range(t):
    strange()