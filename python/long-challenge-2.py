# cook your dish here
import calendar

def findNoDay(month,year):
    if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
        return 31
    elif((month == 2) and (year%4 == 0) or ((year%100 == 0) and (year%400 == 0))):
        return 29
    elif(month == 2):
        return 28
    else:
        return 30
        
def dayofweek(m, y): 
    t = [ 0, 3, 2, 5, 0, 3, 
          5, 1, 4, 6, 2, 4 ] 
    y -= m < 3
    return (( y + int(y / 4) - int(y / 100) 
             + int(y / 400) + t[m - 1] + 1) % 7) 
  
def findDay(date): 
    day, month, year = (int(i) for i in date.split(' '))     
    dayNumber = calendar.weekday(year, month, day) 
    # days =["Monday", "Tuesday", "Wednesday", "Thursday", 
    #                      "Friday", "Saturday", "Sunday"] 
    return dayNumber 

def count(start_yr,start_month):
    # date = '01 ' + str(start_month) + ' ' + str(start_yr)
    date = dayofweek(start_month,start_yr)
    no_of_days = findNoDay(int(start_month),int(start_yr))
    start= []
    start.append(date)
    start.append(no_of_days)
    # start = calendar.monthrange(start_yr,start_month)
    # start_no_of_days = start[1]
    # days =["Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"]
    # start_day = days[start[0]]
    first_friday_date = []
    first_sunday_date = []
    if start[0]<=5 and start[0]>0:
        first_friday_date.append(6 - start[0])
        first_sunday_date.append(8 - start[0])
    # elif start[0] == 2:
    #     first_friday_date.append(4)
    #     first_sunday_date.append(6)
    # elif start[0] == 3:
    #     first_friday_date.append(3)
    #     first_sunday_date.append(5)
    # elif start[0] == 4:
    #     first_friday_date.append(2)
    #     first_sunday_date.append(4)
    # elif start[0] == 5:
    #     first_friday_date.append(1)
    #     first_sunday_date.append(3)
    elif start[0] == 6:
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
    # start_month, start_yr = input().split()
    # end_month, end_yr = input().split()
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
    


