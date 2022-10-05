n=int(input("enter a number"))
sum=0
num=n
while n>0:
 r=n%10
 sum+=r*r*r
 n=n//10
if sum == num:
  print("amstrong")
else:
  print("It is not")
  
    
  

 
