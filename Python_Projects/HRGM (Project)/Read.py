import pickle
def read():
    hrgm={}
    hrgmfile=open('hrgm.dat','rb')
    try:
        while True:
            hrgm=pickle.load(hrgmfile)
            print(hrgm)
    except EOFError: 
        hrgmfile.close()
