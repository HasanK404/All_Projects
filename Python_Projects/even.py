n=int(input("enter a number :"))
for i in range(1,n):
    if n%i==0:
        print("it is composite")
        break 
    else:
        print("it is Prime")
