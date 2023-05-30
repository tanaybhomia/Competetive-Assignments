t=int(input(""))
rev=0
i=int(0)
for i in range(t):
	n=int(input(""))
	n1=n
	while (n!=0):
		rem=(n%10)
		rev=rev*10+rem
		n=int(n/10)
		
	print(n1)
	print(rev)
	if(n1==rev):
		print("wins")
	else:
		print("looses")
	
