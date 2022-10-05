n=int(input("enter a no:"))
sum=0
num=n
for i in range (1,n):
    if n%i==0:
        sum=sum+i
if sum==num:
    print("it is perfect no")
else:
    print("it is not")
  
    
