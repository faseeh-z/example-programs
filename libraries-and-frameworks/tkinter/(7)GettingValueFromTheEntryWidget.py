from tkinter import*
root = Tk()


def MyFunction():
    MyLabelWidget1 = Label(root, text="Thanks, " + MyEntryWidget.get()) # The "get()" function takes the value from the widget.
    MyLabelWidget1.pack()


MyLabelWidget = Label(root, text="Enter your name:")
MyLabelWidget.pack()

MyEntryWidget = Entry(root)
MyEntryWidget.pack()

MyButton = Button(root, text="Ok.", command=MyFunction)
MyButton.pack()


root.mainloop()