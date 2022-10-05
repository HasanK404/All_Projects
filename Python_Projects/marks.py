s1=int(input("enter your Math marks :"))
s2=int(input("enter your Bio marks :"))
s3=int(input("enter your Chem marks :"))
s4=int(input("enter your Phy marks :"))
s5=int(input("enter your Eng marks :"))
total=s1+s2+s3+s4+s5
per=total/5
print(per)
if per>=90:
 print("grade A")
elif per>=70:
 print("grade B")
elif per>=55:
 print("grade C")
elif per>=33:
 print("grade D")
else:
 print("grade E")

count=0
if s1<33:
 count=count+1
if s2<33:
 count=count+1
if s3<33:
 count=count+1
if s4<33:
 count=count+1
if s5<33:
 count=count+1

if count>1:
 print("detained")
elif count==1:
 print("Compartment")
else:
 print("passed")



