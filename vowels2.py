str=input("Enter a String:")
count=0
str=str.upper()
x=0
length=len(str)
for i in range (1,length+1):
    ch=str[x:i]
    x+=1
    if ch=="A" or ch=="E" or ch=="I" or ch=="O" or ch=="U":
        count+=1
print(count)
