T = int(input())
for e in range(T):
    count = 0
    right = 0 
    left = 0
    n = int(input())
    v = list(map(int,input().split()))
    
    
    while(left != n):
        if(v[left] % 4 == 0):
           count = count + n - left 
        elif (v[left] % 4 == 2):
            right = left
            if(right < n-1):
                right = left + 1
	            while (v[right] % 4 == 1 or v[right] % 4 == 3) and right < n :
	                right +=1
	            if((v[right] % 4 == 0 or v[right] % 4 == 2) and right < n):
	                count = count + (n-right)
        else:
            right = left + 1
            count += 1
            while((v[right]% 4 == 3 or v[right] % 4 == 1) and right < n):
                right +=1
                count = count + 1
            if(v[right] % 4 == 0 and right < n):
                count += n-right
            elif(v[right] % 4 == 2 and right < n)
                right +=1
                while((v[right] % 4 == 1 or v[right] % 4 == 3) and right < n ):
	                right +=1
	            if((v[right] % 4 == 0 or v[right] % 4 == 2) and right < n):
	                count = count +  (n-right)
        left += 1
    print(count)   

