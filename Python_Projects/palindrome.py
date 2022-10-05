n=int(input("enter a number:"))
num=n
rev=0
while n>0:
    r=n%10
    rev=rev*10+r
    n=n//10
if num==rev:
    print("It is Amstrong")
else:
    print("it is not")
