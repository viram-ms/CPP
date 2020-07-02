def split_words(pt):
	return [char for char in pt]
ct = ''

def encrypt():
	pt = 'wearethebest'
	key = 'heaven'
	#pt=input('enter plain text')
	#key=input('enter key')
	key_list = split_words(key)
	key_list_sorted = sorted(key_list)
	array=[]
	add_z = len(key) - len(pt)%len(key)
	for x in range(add_z):
		pt = pt+'z'
	rows = len(pt)/len(key)
	for x in range(0,int(rows)):
		temp=[]
		for y in range(len(key)):
			temp.append(pt[x*6+y])
		array.append(temp)
	pair = []
	for i in range(int(rows)):
		for j in range(len(key)):
			pair.append(array[i][j]+array[i+1][j])
		break
	par_visited =[False]*len(key)
	# for x in key_list_sorted:
	# 	for i,y in enumerate(key_list):
	# 		if(x==y and par_visited[i]==False):
    #             par_visited[i] = True
    #             ct = ct + pair[i]
    #             print(pair[i],end=' ')
    #             break

def decrypt():
    ct='abeeeswhttre'
    key = 'heaven'
    key_list = split_words(key)
    key_list_sorted = sorted(key_list)
    array=[]
    rows = len(ct)/len(key)
    par_visited =[False]*len(key)
	for j,x in enumerate(key_list_sorted):
		for i,y in enumerate(key_list):
			if(x==y and par_visited[i]==False):
                par_visited[i] = True
                print(ct[j],ct[j+1])
                break


encrypt()
decrypt()