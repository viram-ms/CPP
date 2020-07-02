# cook your dish here
import calendar

def count(start_yr,start_month):
    start = calendar.monthrange(start_yr,start_month)
    start_no_of_days = start[1]
    days =["Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"]
    start_day = days[start[0]]
    first_friday_date = []
    first_sunday_date = []
    if start[0]<=4:
        first_friday_date.append(5 - start[0])
        first_sunday_date.append(7 - start[0])
    elif start[0] == 5:
        first_friday_date.append(7)
        first_sunday_date.append(2)
    else:
        first_friday_date.append(6)
        first_sunday_date.append(1)
        
        
    f = first_friday_date[0]
    while(f <= start[1]):
        f = f + 7
        if f<= start[1]:
            first_friday_date.append(f)
    
    s = first_sunday_date[0]
    while(s <= start[1]):
        s = s+ 7
        if s <=start[1]:
            first_sunday_date.append(s)
    
    if (first_friday_date[1] + 2) >= first_sunday_date[-2]:
        return 1
    else:
        return 0
    

T = int(input())
for x in range(T):
    sum = 0
    start_month, start_yr = map(int,input().split())
    end_month, end_yr = map(int,input().split())
    temp_yr = start_yr
    temp_month = start_month
    while(temp_yr != end_yr or temp_month!=end_month):
        sum = sum + count(temp_yr,temp_month)
        if temp_month<12:
            temp_month = temp_month + 1
            temp_yr = temp_yr
        elif temp_month == 12:
            temp_month =1
            temp_yr = temp_yr + 1
    
    if temp_yr == end_yr and temp_month == end_month:
        sum = sum + count(temp_yr,temp_month)
    
    print(sum)
    


