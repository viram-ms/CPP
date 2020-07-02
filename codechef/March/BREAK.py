# cook your dish here

def equate(a,board):
    for i in a:
        if i in board:
            return i
        else:
            return None
            
def findnum(b,x1):
    for i in b:
        if i>x1:
            return i
        else:
            return None
    
T,S = map(int,input().split())
if S == 1:
    for x in range(T):
        N= int(input())
        a = list(map(int,input().split()))
        b = list(map(int,input().split()))
        a.sort()
        b.sort()
        flag = False
        temp = 0
        board = set()
        temp1 = a[0]
        temp2 = b[0]
        if temp2 > temp1:
            board.add(temp1)
            board.add(temp2)
            a.remove(temp1)
            b.remove(temp2)
            for i in range(N-1):
                x1 = equate(a,board)
                if x1:
                    x2 = findnum(b,x1)
                    if x2:
                        a.remove(x1)
                        b.remove(x2)
                        board.add(x2)
                    else:
                        flag = True
                        break
                else:
                    flag= True
                    break
        else:
            flag = True
        
        if flag == False:
            print("YES")
        else:
            print("NO")



# for i in a:
#             # print(board)
#             for j in b:
#                 # print(i,j)
#                 if j > i and len(board) == 0:
#                     board.append(i)
#                     board.append(j)
#                     a.remove(i)
#                     b.remove(j)
#                     break
#                 elif len(board) != 0 and (i in board):
#                     if j>i:
#                         board.append(j)
#                         a.remove(i)
#                         b.remove(j)
#                         break
                    
#                 else:
#                     # print(i,j)
#                     flag=True
#                     break
#             if flag == True:
#                 break
        