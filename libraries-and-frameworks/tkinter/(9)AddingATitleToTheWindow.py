from tkinter import*
root = Tk()

root.title("This is a title.") # The title function creates a title for the window.


MyLabelWidget = Label(root, text = "This window has a title! I created it with the 'title' function.").pack()

root.mainloop()