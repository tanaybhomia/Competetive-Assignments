# Chef is fond of burgers and decided to make as many burgers as possible.

# Chef has AA patties and BB buns. To make 11 burger, Chef needs 11 patty and 11 bun.
# Find the maximum number of burgers that Chef can make.


# Number of Test cases
t=int(input()) 


# Figure Out how to take input with just a space
# Patties and buns
a=int(input(""))
b=int(input(""))

i=1
while i<=t:
    if a<=b:
         print(a)
    elif a==b:
        print(a)
    elif b<=a:
        print(b)
    i=i+1