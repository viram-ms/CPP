def solution(passwords, loginAttempt, length, temp, list1):
    for password in passwords:
        if (loginAttempt[:len(password)] == password):
            temp = temp + len(password)
            print(temp)
            list1.append(password)
            if(temp<length):
                solution(passwords, loginAttempt[len(password):],length,temp,list1)
            elif(temp == length):
                return ' '.join(list1)
            else:
                return 'WRONG PASSWORD'

    if(len(list1)==0):
        return 'WRONG PASSWORD'
    else:
        return 'WRONG PASSWORD'

def passwordCracker(passwords, loginAttempt):
    # Write your code here
    length = len(loginAttempt)
    temp = 0
    list1 = []
    answer=solution(passwords,loginAttempt,length,temp,list1)
    print(answer)
    return answer