import pickle
hrgm={}
hrgmfile=open('hrgm.dat','ab')
ans = 'y'
while ans=='y':
    Gno=int(input("enter the game no:"))
    Gname=input("enter the game name:")
    Gpieces=int(input("enter how many pieces:"))
    price=float(input("enter the amount of price:"))
    hrgm['Gno']=Gno
    hrgm['Gname']=Gname
    hrgm['Gpieces']=Gpieces
    hrgm['price']=price
    pickle.dump(hrgm,hrgmfile)
    ans=input("want to append more products?(y/n)...")
hrgmfile.close()
