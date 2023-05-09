t = int(input("")) 
tl = 0
while(tl<t):
    n = int(input(""))
    if (n <= 9):
        first = int(1)
    elif (n>=10):
        first = int(2)
        n = n/2
        n = int(n)
    print(first," ",n)
    tl = tl+1