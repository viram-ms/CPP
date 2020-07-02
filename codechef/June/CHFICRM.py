t = int(input())
for _ in range(t):
    n = int(input())
    change = {
        "5": 0,
        "10": 0,
        "15": 0
    }
    
    arr = list(map(int,input().split()))
    flag = True
    for i in range(n):
        diff = arr[i] - 5
        
        if diff == 0:
            change['5'] += 1
        elif diff == 5:
            if change['5'] != 0:
                change['5'] -= 1
                change['10'] += 1
            else:
                flag = False
            
                break
        elif diff == 10:
            if change['10'] != 0:
                change['10'] -= 1
                change['15'] += 1
            elif change['5'] >= 2:
                change['5'] -= 2
                change['15'] += 1
            else:
                flag = False
                break
    if flag:
        print("YES")
    else:
        print("NO")
        
                