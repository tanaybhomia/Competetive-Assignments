t = int(input())
for i in range (t):
	n = int(input())
	x = n*2
	count = 0
	ans = 0
	list1 = list(map(int,input("").strip().split()))[:x]
	for j in range (x):
		temp = list1[j]
		for k in range(x):
			if (temp == k+1):
				count +=1
				if (count>=3):
					ans = 1
					break
			if (ans == 1):
				break
	if (ans == 1):
		print("Yes")
	else :
		print("No")
