
def split_words(pt):
	return [char for char in pt]

def encrypt():
	pt = 'wearethebes'
	key = 'heaven'
	ct =''
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
	print('CT:')
	for x in key_list_sorted:
		for i,y in enumerate(key_list):
			if(x==y and par_visited[i]==False):
				par_visited[i] = True
				print(pair[i], end=' ')
				ct = ct + pair[i]
				break
	print()
	return ct
			
def decrypt():
	ct='abeeeswhttre'
	key = 'heaven'
	key_list = split_words(key)
	key_list_sorted = sorted(key_list)
	array=[[0,0,0,0,0,0],[0,0,0,0,0,0]]
	# print(array)
	k=0
	# temp = [0]*6
	# temp1 = [0]*6
	# rows = len(ct)/len(key)
	par_visited =[False]*len(key)
	for j,x in enumerate(key_list_sorted):
		for i,y in enumerate(key_list):
			if(x==y and par_visited[i]==False):
				par_visited[i] = True
				# print(i,ct[k],ct[k+1])
				array[0][i]=ct[k]
				array[1][i]=ct[k+1]
				k=k+2
				break
	# print(len(array))
	for x in array:
		for y in x:
			print(y,end = ' ')

	print()
while(True):
	n= int(input('enter number'))
	if n==1:
		encrypt()
	else:
		decrypt()