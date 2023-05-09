x = input("")
l = [int(i) for i in str(x)]
length = len(l)
if (length == 1):
    print(1)
elif (length == 2):
    print(2)
elif (length == 3):
    print(3)
else :
    print("More than 3 digits")