import pickle
def search():
    hrgm={}
    found=False
    n=int(input("Enter the Gno you want to search:"))
    hrgmfile=open('hrgm.dat','rb')
    searchkeys=[n]
    try:
        print("Searching in Store....Loading....") 
        while True:
            hrgm=pickle.load(hrgmfile)
            if hrgm['Gno']in searchkeys:
                print(hrgm)
                found=True  
    except EOFError:
        if found ==False:
            print("Not available in stock \nsorry check in another store")
        else:
            print("Item Found")

