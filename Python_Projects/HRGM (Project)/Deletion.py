import os
import pickle
def delete():
        hrgmfile=open("hrgm.dat","rb")
        hrgmfilenew=open("hrgmnew.dat","wb")
        n=int(input('Enter the Gno you Want to delete:'))
        flag=0
        try:
                while True:
                        d=pickle.load(hrgmfile)
                        if d['Gno']== n: 
                                flag=1
                        else:
                                pickle.dump(d,hrgmfilenew)
        except EOFError:
                if flag==0: print("sorry can't find the Gno")
        finally:
                hrgmfile.close()
                hrgmfilenew.close()
                os.remove("hrgm.dat")
                os.rename("hrgmnew.dat","hrgm.dat")
		
