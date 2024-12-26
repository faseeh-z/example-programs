from tkinter import * # "*" addresses everything in the tkinter library, and we are importing everything in it.
# In tkinter, everything is a widget. eg: a button.

root = Tk() # Assigning the root widget as "Tk", which is the window.

# Creating Widgets.
MyLabelWidget1 = Label(root, text = "Hello World!") # Creating a Label Widget. "Label()" is a function to create Label Widgets. "root" inside "()" says the destination of the widget is in the root.
MyLabelWidget2 = Label(root, text = "Iam a Tkinter programme.")

#################

# Packing Widgets.
MyLabelWidget1.grid(row=0, column=0) # Istead of ".pack()" function, we use the ".grid()" function.
MyLabelWidget2.grid(row=1, column=0)


# We can create and pack widgets in a single line. See:
MyLabelWidget3 = Label(root, text = "These are Text Widgets.").grid(row=3, column=2) # Placed the packing line at the end of the line creating the widget.

#################

root.mainloop() # Calling root widget (the window) as the main loop.