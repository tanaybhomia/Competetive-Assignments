t = int(input())
i=0
j=0
while i<t:
	n=int(input())
	x = int((n/2)+1)
	y = int(n/2)
	brace1 = list()
	part1 = list()
	part2 = list()
	brace1 = list(input())
	part1 = brace1[0:x-1]
	part2 = brace1[y:n]
	check1 = list()
	check1 = part1+part2
	check2 = part2+part1
	if ((check1 and check2) == brace1):
		print("YES")
	else :
		print("NO")
	i=i+1
