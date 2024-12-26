from tkinter import*
from PIL import ImageTk,Image
# PIL is a Python "Pillow" image library named "Pillow".
# It's an improved version of the old "pil" (stands for Python Image Library).
# We need to install Pillow library inorder to use it.

root = Tk()
root.title("This is a title")
root.iconbitmap(r"C:\Users\fasee\Documents\My Icons\QuestionMark1.ico")
# iconbitmap method belongs to the Tkinter library.
# iconbitmap method assignes icons.
# "r" and """" are essential here because the path contains a whitespace character.



# To create an image, we need to define that image, then put it into a widget, then put that widget into the screen.
MyImage = ImageTk.PhotoImage(Image.open(r"C:\Users\fasee\Pictures\Sprites\ElectricGuitarPNG.png"))
# Defining image. "r" and """" are used if there are whitespaces spaces in our path.
# Here we don't have any spaces, but there's no problem putting it.
MyLabelWithAnImage = Label(image=MyImage)
# Assigning "MyImage" to "MyLabelWithAnimage" Label Widget.
# We don't want to use the "root" here. I don't know why.
MyLabelWithAnImage.pack()



QuitButton = Button(root, text="Exit", command=root.quit) # The "quit" method quits the root window.
QuitButton.pack()

root.mainloop()