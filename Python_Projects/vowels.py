string=input("string :")
upper=string.upper()
length=len(string)
count=0
x=0
for i in range(0,length):
 ch=string[x:i]
 x+=1
if ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U':
    count+=1
print(count)    

    
