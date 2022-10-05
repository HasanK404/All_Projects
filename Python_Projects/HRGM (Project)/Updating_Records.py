import os
import pickle
def update():
    print("Updating Data")
    hrgmfile=open("hrgm.dat","rb")
    hrgmfilenew=open("hrgmnew.dat","wb")
    n=int(input("Enter The Gno you want to change:"))
    f=0
    while True:
        try:
            data=pickle.load(hrgmfile)
            if data['Gno']==n:
                print("Re enter with new record")
                Gpieces=int(input("enter how many piece(s):"))
                price=float(input("enter the amount of price:"))
                data["Gpieces"]=Gpieces
                data["price"]=price
                pickle.dump(data,hrgmfilenew)
                print("Record Update Successfully")
                f=1
            else:
                pickle.dump(data,hrgmfilenew)
        except EOFError:
            break
    if f==0:
        print("Record Not Found!")
    hrgmfile.close()
    hrgmfilenew.close()
    os.remove("hrgm.dat")
    os.rename("hrgmnew.dat","hrgm.dat")
    print("updated Records")
    hrgmfile=open("hrgm.dat","rb")
    while True:
        try:
            data=pickle.load(hrgmfile)
            print(data)
        except EOFError:
            break
    hrgmfile.close()
    
    
