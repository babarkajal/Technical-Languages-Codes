from  Tkinter import *

top=Tk()

#l1=Label(top,"User name")
#L1.pack(side='left')

L1 = Label(top, text="User Name")
L1.pack( side = LEFT)
E1 = Entry(top, bd =5)  #,font='aerial')
E1.pack(side = LEFT)

Lb1 = Listbox(top)
Lb1.insert(1, "Python")
Lb1.insert(2, "Perl")
Lb1.insert(3, "C")
Lb1.insert(4, "PHP")
Lb1.insert(5, "JSP")
Lb1.insert(6, "Ruby")

Lb1.pack(expand=1,side=BOTTOM)

#create a widget
top.mainloop()
