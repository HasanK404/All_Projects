import tkinter as tk

root = Tk()

topFrame = Frame(root)
topFrame.pack()
bottomFrame = Frame(root)
BottomFrame.pack(side=BOTTOM)

button1 = Button(topFrame, text="button 1", fg="red")
button2 = Button(topFrame, text="button 2", fg="green")
button3 = Button(topFrame, text="button 3", fg="blue")
button4 = Button(topFrame, text="button 4", fg="purple")

button1.pack(side=LEFT)
button2.pack(side=LEFT)
button3.pack(side=LEFT)
button4.pack(side=BOTTOM)

root.mainloop()
