from tkinter import*
root = Tk()


MyEntryWidget = Entry(root)
MyEntryWidget.insert(0, "Enter something:") # the insert function inserts a value to an entry widget.
MyEntryWidget.pack()

root.mainloop()