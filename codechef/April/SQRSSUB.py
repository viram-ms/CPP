def findnext(x,s):
    low=0
    high=len(s)-1
    index=-1

    while(low<=high):
        mid=(low+high)//2

        if(s[mid]>x):
            index=mid
            high=mid-1
        else:
            low=mid+1
           
    if(index==-1):
        return index
    else:
        return s[index]
            

def square():
    n=int(input())
    a=list(map(int,input().split()))
    c=0
    set0=[]
    set2=[]
    for i in range(n):
        if(a[i]%4==0):
            set0.append(i)
        elif(a[i]%4==2):
            set2.append(i)


    left=0
    right=0
    while(left != n):
        product=1
        while(right != n):
            if(a[right]%4==0):
                c+=n-right
                break
            
        
            elif(a[right]%4==1 or a[right]%4==3):
                x=findnext(right,set2)
                y=findnext(right,set0)
                if(x==-1 and y==-1):
                    c+=n-right
                    break
                if(x==-1 and y!=-1):
                    c+=n-right
                    break
                if(x!=-1 and y==-1):
                    c+=x-right
                    right=x
                if(x!=-1 and y!=-1):
                    if(y<x):
                        c+=n-right
                        break 
                    else:
                        c+=x-right
                        right=x
                        
            else:
                x=findnext(right,set2)
                y=findnext(right,set0)
                if(x==-1 and y==-1):
                    break
                elif(x==-1 and y!=-1):
                    c+=n-y
                    break
                elif(x!=-1 and y==-1):
                    c+=n-x
                    break
                else:
                    c+=n-(min(x,y))
                    break
        left+=1 
        right=left
                
    
    print(c)
t=int(input())
for _ in range(t):
    square()