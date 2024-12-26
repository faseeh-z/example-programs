from tkinter import*
root = Tk()

Intro = Label(root, text = "This GUI application is created by Faseeh.").grid(row=0, column=0)

def MyButtonFunction():
    Thanks = Label(root, text = "Thanks for clicking.").grid(row=1, column=1)

MyButton = Button(text = "Click here.", command = MyButtonFunction).grid(row=0, column=1) # "command" calls the function.

root.mainloop()