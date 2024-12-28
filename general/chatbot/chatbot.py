import sys # sys module contains the exit() function that can terminate the programme. This program uses this function.
import time # Time module helps to make a timer.
# module != library. A library is a collection of modules.

print("This program is created by Faseeh Zaman FS")
print(" ")
print("Don't use any punctuations. Don't use multiple lines. Keep the question simple. Click Enter to continue.")
Confirmation = str("_") # Makes the User click Enter to continue.
while Confirmation != "":
    Confirmation = input()





ChatBotName = str("ChatBot") # Name of the chatbot.
Response = str("") # The input of the user.
Username = str("You") # Name of the user.
NumberOne = int() # Variables for calculation purposes.
NumberTwo = int() # Variables for calculation purposes.

def InputFunction(): # Gets the input, make it all lowercase and split it into a list. Doesn't split if the input is empty.
    global Response
    global Username
    Response = input(Username + ": ")
    Response = Response.lower() # .lower() method makes all the characters in a string lowercase. Methods != functions. They have a dot(.)
    if Response != "":
        Response = Response.split() # .split() method splits the string into a list. Methods != functions. They have a dot(.)


def NumbersGettingFunction(): # Function that gets the first two numbers in the response.
    global Response
    global NumberOne
    global NumberTwo
    NumberOfNumbers = int()
    x = 0 # Variable to store the number of times we have chescked the code for numbers.

    while NumberOfNumbers != 1 and x != 100: # Finding the first number. The operation stops if x becomes 100.
        try:
            Response[x] = int(Response[x])
            NumberOfNumbers += 1
            NumberOne = Response[x]
            x += 1
        except:
            x += 1
    while NumberOfNumbers != 2 and x != 100: # Finding the second number.
        try:
            Response[x] = int(Response[x])
            NumberOfNumbers += 1
            NumberTwo = Response[x]
            x += 1
        except:
            x += 1
    if x == 100:
        print(ChatBotName + ": " + "Sorry. It seems like you didn't provide me the numbers or there is some other issue. Anyways, Sorry. Let's try again.")


def AdditionFunction():
    Sum = NumberOne + NumberTwo
    print(ChatBotName + ": " + "The sum of the numbers you provided is " + str(Sum) + ". Thanks.")
def MultiplicationFunction():
    Product = NumberOne * NumberTwo
    print("ChatBotName" + ": " + "Sure, the product is " + str(Product) + ". Thanks")







#---STARTING---#

print(ChatBotName + ": " + "Hello! I am " + ChatBotName + ". What is your name?") # Getting Username.
InputFunction()
Username = Response[-1]

print(ChatBotName + ": " + "It looks like your name is " + Username + ". Right?") # Confirming Username.
InputFunction()
while "yes" not in Response and "sure" not in Response and "exactly" not in Response and "yeah" not in Response and "yep" not in Response and "ya" not in Response and "m" not in Response and "mm" not in Response and "mmm" not in Response:
    print(ChatBotName + ": " + "Then What is your name?")
    InputFunction()
    print(ChatBotName + ": " + "Is it " + Response[-1] + "?")
    Username = Response[-1]
    InputFunction()

print(ChatBotName + ": " + "Ok, let's continue, " + Username + ". I can do addition and multiplication. How can I help you?")


numberOfNotUnderstoodResponses = 0 # To keep track of how many times the chatbot said "I don't know".
while True:
    InputFunction()
    ResponseUnderstood = False # This variable is changed to True if any if conditions are met. If not, the programme will do the last if statement.

    if "can" in Response or "could" in Response or "will" in Response or "would" in Response and "you" in Response and "add" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "Yes I can! Provide me the numbers.")
        InputFunction()
        NumbersGettingFunction()
        AdditionFunction()
    if "add" in Response or "plus" in Response or "+" in Response:
        ResponseUnderstood = True
        NumbersGettingFunction()
        AdditionFunction()
    if "multiply" in Response or "product" in Response or "*" in Response or "times" in Response:
        ResponseUnderstood = True
        NumbersGettingFunction()
        MultiplicationFunction()

    if ("wow" in Response or "unbelievable" in Response
        or "extraordinary" in Response or "amazing"  in Response or
        "awesome" in Response or "impressive" in Response or
        "wonderful" in Response or "super" in Response):
        ResponseUnderstood = True
        print(ChatBotName + ": " + "I am glad that you liked me, " + Username + ". I can help you more, and it's my pleasure.")

    if ("perform" in Response or "do" in Response) and "addition" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "Sure. Provide me the numbers.")
        try:
            InputFunction()
            NumbersGettingFunction()
            AdditionFunction()
        except:
            print(ChatBotName + ": " + "Sorry. It seems like you didn't provide me the numbers or there is some other issue. Let's try again.")

    if "ok" in Response or "okay" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "Ok. Now what?")

    if "thanks" in Response or "welcome" in Response:
        print(ChatBotName + ": " + "Don't mention it.")

    if "where" in Response and "you" in Response and ("live" in Response or "reside" in Response or "stay" in Response):
        ResponseUnderstood = True
        print(ChatBotName + ": " + "In this computer. Where else would it be?")

    if "where" in Response and "your" in Response and "house" in Response or "home" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "My house is this computer now. But I was born in the PC of Faseeh. Do you know him?")
        InputFunction()
        if "yes" in Response or "sure" in Response or "absolutely" in Response or "yeah" in Response or "yep" in Response or "ya" in Response or "m" in Response or "mm" in Response or "mmm"  in Response:
            print(ChatBotName + ": " + "Oh, That's great! He was a nice guy. I really miss him.")
        else:
            print(ChatBotName + ": " + "I think you don't know him. I wonder then how you got this program. Don't try to explain me. I won't understand.")

    if "who" in Response or "whome" in Response and "create" in Response or "created" in Response or "make" in Response or "made" in Response or "build" in Response or "built" in Response and "you" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "Faseeh built me. Do you know him?")
        InputFunction()
        if "yes" in Response or "sure" in Response or "absolutely" in Response or "yeah" in Response or "yep" in Response or "ya" in Response or "m" in Response or "mm" in Response or "mmm"  in Response:
            print(ChatBotName + ": " + "Oh, That's great! I really miss him.")
        else:
            print(ChatBotName + ": " + "I think you don't know him. I wonder then how you got this program. Don't try to explain me. I won't understand.")
    
    if "help" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "Sure. Tell me how can I help you.")


# To exit the program.
    if "nope" in Response or "no" in Response or "never" in Response:
        ResponseUnderstood = True
        print(ChatBotName + ": " + "Do you want me to leave?")
        InputFunction()
        if "go" in Response or"leave" in Response or "yes" in Response or "sure" in Response or "absolutely" in Response or "yeah" in Response or "yep" in Response or "ya" in Response or "m" in Response or "mm" in Response or "mmm"  in Response:
            print(ChatBotName + ": " + "Okay, Bye...")
            time.sleep(1) # This sleep method in the time module stops the execution of the programme for the given time. In this case, one second.
            sys.exit() # This method from the sys module ends the program.
        else:
            print(ChatBotName + ": " + "It looks like you don't want to make me leave. Thanks, how can I help you?")

    if "get" in Response and "out" in Response:
        print(ChatBotName + ": " + "Okay, Bye...")
        time.sleep(1) # This sleep method in the time module stops the execution of the programme for the given time. In this case, one second.
        sys.exit() # This method from the sys module ends the program.

    if "bye"in Response or "ta" in Response or "tata" in Response:
        print(ChatBotName + ": " + "Okay, Bye...")
        time.sleep(1) # This sleep method in the time module stops the execution of the programme for the given time. In this case, one second.
        sys.exit() # This method from the sys module ends the program.



# If none of the conditions are met.
    if ResponseUnderstood == False:
        if numberOfNotUnderstoodResponses == 0:
            print(ChatBotName + ": " + "Sorry, I didn't understand what you said. Can you say it in another way?")
        if numberOfNotUnderstoodResponses == 1:
            print(ChatBotName + ": " + "Sorry, I am still not getting it. Shall we talk about something else?")
        if numberOfNotUnderstoodResponses == 2:
            print(ChatBotName + ": " + "I am so sorry, this is the third time I don't understand.")
        if numberOfNotUnderstoodResponses == 3:
            print(ChatBotName + ": " + "Still no idea. Sorry for the disappointment. Do you want me to leave?")
            InputFunction()
            if "go" in Response or"leave" in Response or "yes" in Response or "sure" in Response or "absolutely" in Response or "yeah" in Response or "yep" in Response or "ya" in Response or "m" in Response or "mm" in Response or "mmm"  in Response:
                print(ChatBotName + ": " + "Okay, Bye...")
                time.sleep(1) # This sleep method in the time module stops the execution of the programme for the given time. In this case, one second.
                sys.exit() # This method from the sys module ends the program.
            else:
                print(ChatBotName + ": " + "It looks like you don't want me to leave eventhough I don't understand anything. Thanks, you are a great person. How can I help you?")
        numberOfNotUnderstoodResponses += 1
    else:
        numberOfNotUnderstoodResponses = 0