from tkinter import * # * addresses everything in the tkinter library, and we are importing everything in it.
# in tkinter, everything is a widget. eg: a button.

root = Tk() # Assigning the root widget as Tk, which is the window.

MyLabelWidget = Label(root, text = "Hello World!") # Creating a Label Widget. Label() is a function to create Label Widgets. root inside () says the destination of the widget is in the root. 

MyLabelWidget.pack() # To pack the Label Widget. pack() is the function.

root.mainloop() # Calling root widget (the window) as the main loop.