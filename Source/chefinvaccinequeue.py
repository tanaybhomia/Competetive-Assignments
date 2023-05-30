# https://www.codechef.com/problems/VACCINQ
# 1016

t = int(input())
for i in range (t):
	n,p,x,y = map(int,input().split())
	
	queue = list(map(int,input("").strip().split()))[:n]
	
	ans = int(0)
	for i in range(0,p):
		if queue[i] == 1 :
			ans = ans + y
		elif queue[i] == 0 :
			ans = ans + x
		
	print(ans)
