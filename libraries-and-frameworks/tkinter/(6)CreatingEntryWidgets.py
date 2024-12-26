from tkinter import*
root = Tk()

MyEntryWidget = Entry(root) # "Entry()" function creates entry Widgets.
MyEntryWidget.pack()

MyColoredEntryWidget = Entry(root, fg="green", bg="yellow") # We can give color to them.
MyColoredEntryWidget.pack()

MyWiderEntryWidget = Entry(root, width = 50) # We can also give width, But we can't give height.
MyWiderEntryWidget.pack()

MyEntryWidgetWithBiggerBorder = Entry(root, borderwidth=5)
MyEntryWidgetWithBiggerBorder.pack()

root.mainloop()