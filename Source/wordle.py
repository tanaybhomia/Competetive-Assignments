t=int(input(""))
tl=int(1)
while (tl<=t):
	s=input("")
	m=input("")
	s1=""
	for i in range(len(s)):
			if (s[i]==m[i]):
				s1+="G"
			else :
				s1+="B"
	print(s1)
	tl+=1
