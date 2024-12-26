from tkinter import * # "*" addresses everything in the tkinter library, and we are importing everything in it.
# In tkinter, everything is a widget. eg: a button.

root = Tk() # Assigning the root widget as "Tk", which is the window.

MyLabel1 = Label(root, text = "This is a Label Widget.").grid(row=0, column= 0)
MyButton1 = Button(root, text = "THis is a button.").grid(row=1, column=0)
MyButton2 = Button(root, text = "This is a disabled button", state = DISABLED).grid(row=1, column=1) # "state" attribute defines the state of the button.
MYButton3 = Button(root, text = "This is a button with a specific size in the x axis.", padx = 20).grid(row=2, column=0) # "padx" means the width of the button.
MYButton3 = Button(root, text = "This is a button with a specific size in the y axis.", pady = 20).grid(row=2, column=1) # "pady" means the height of the button.
MYBUtton4 = Button(root, text = "This buttonhas specific x and y size.", padx = 20, pady = 20).grid(row=4, column= 0)

root.mainloop() # Calling root widget (the window) as the main loop.