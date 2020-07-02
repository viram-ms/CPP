# cook your dish here

def max_matrix(mat):
    maximum = 0
    pos_x=0
    pos_y=0    
    for i,x in enumerate(mat):
        for j,y in enumerate(x):
            if y>maximum:
                maximum = y
                pos_x = i
                pos_y = j
    return (maximum,pos_x,pos_y)

def max_find(movies,temp):
    for x in range(4):
        for y in range(3-x):
            if temp[y]<temp[y+1]:
                temp[y],temp[y+1] = temp[y+1],temp[y]
                movies[y],movies[y+1] = movies[y+1],movies[y]
    return (movies,temp)
            
def main():
    A = {'3':0,'6':0,'9':0,'12':0}
    B = {'3':0,'6':0,'9':0,'12':0}
    C = {'3':0,'6':0,'9':0,'12':0}
    D = {'3':0,'6':0,'9':0,'12':0}
    legend= ['3','6','9','12']
    movies = ['A','B','C','D']
    n = int(input())
    for i in range(n):
        letter , val = input().split()
        # print(letter,val)
        if letter == 'A':
            A[val] = A[val] + 1
        elif letter == 'B':
            B[val] = B[val] + 1
        elif letter == 'C':
            C[val] = C[val] + 1
        elif letter == 'D':
            D[val] = D[val] + 1
        else:
            print('asdf')
            break
    visited = {'A':False,'B':False,'C':False,'D':False}
    cost = [100,75,50,25]
    final_freq = []
    final_movie = []
    combined_movies = []
    combined_freq = []
    final_time = []
    pos_x=0
    pos_y=0
    for i in legend:
        temp = [A[i],B[i],C[i],D[i]]
        val = max_find(['A','B','C','D'],temp)
        # print(val)
        combined_movies.append(val[0])
        combined_freq.append(val[1])
        # print(val[0])
        # print(val[1])
    while len(final_movie) < 4 :
        val = max_matrix(combined_freq)
        maximum=val[0]
        pos_x =val[1]
        pos_y = val[2]
        # print(maximum,pos_x,pos_y)
        # print(legend[pos_x])
        # print(combined_movies[pos_x][pos_y])
        if visited[combined_movies[pos_x][pos_y]] == False and legend[pos_x] not in final_time and combined_movies[pos_x][pos_y] not in final_movie:
            final_freq.append(maximum)
            final_movie.append(combined_movies[pos_x][pos_y])
            final_time.append(legend[pos_x])
        combined_freq[pos_x][pos_y]=0
        if combined_freq == [[0]*4]*4:
            break
    # print(final_freq)
    # print(final_movie)
    total =0
    for i,x in enumerate(final_freq):
        # print(x)
        if x!=0:
            total = total + x*cost[i]
        else:
            total = total - 100
    return total - (4-len(final_movie))*100

T = int(input())
sum = 0
for x in range(T):
    val = main()
    print(val)
    sum = sum + val
print(sum)    
        
