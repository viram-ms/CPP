
def promising(self,i,wt,total):
    return ((wt + total >= ans) and ( (wt==ans) or (wt + values[i+1] <=ans) ))

def sumofsubset(self,i,wt,total):
    if(promising(i,wt,total)):
        if wt == ans:
            print(i)
            print("\n{",end=" ")
            for j in range(i+1):
                if inc[j]:
                    print(values[j],end=' ')
            print("}\n")
        else:
            inc[i+1] = True
            self.sumofsubset(i+1,wt+values[i+1],total-values[i+1])
            inc[i+1] = False
            self.sumofsubset(i+1,wt,total-values[i+1])




values = [1,2,3,4,5,6,7,8,9,10]
total = sum(values)
ans = 10
inc = [0]*50
sumofsubset(-1,0,total)
