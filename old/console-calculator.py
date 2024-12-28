print("This program does addition, subraction, multiplication and divisioin.")
print("Example: ")
print("        Input  = 1+2")
print("        Output = 3")
print("")

# Extracts consecutive number characters from a list into a single character and returns it's list.
def ExtractNumbers(List):
    NumbersList = []
    Temp = str()
    for Character in List:
        if Character.isdigit():
            Temp = str(Temp) + str(Character)
        else:
            if Temp != "":
                NumbersList.append(Temp)
            Temp = str()
    if Temp != "":
        NumbersList.append(Temp)
    return NumbersList

# Extracts "+", "-", "*", "/" from a list and returns it's list.
def ExtractOperants(List):
    OperantsList = []
    for Character in List:
        if (
            Character == "+" or
            Character == "-" or
            Character == "*" or
            Character == "/"
        ):
            OperantsList.append(Character)
    return OperantsList

def FindResult(NumbersList, OperantsList):
    Result = None

    # Error checking
    if len(NumbersList) == 0 and len (OperantsList) < 1:
        Result = "Error! your input contains neither numbers nor operation symbols."
        return Result
    if len(NumbersList) > 2 and len (OperantsList) > 1:
        Result = "Error! Your input contains more than two numbers and more than one operation symbol."
        return Result
    if len(NumbersList) > 2 and len (OperantsList) < 1:
        Result = "Error! Your input contains more than two numbers and no operation symbol"
        return Result
    if len(NumbersList) < 2 and len (OperantsList) > 1:
        Result = "Error! Your input contains less than two numbers and more than one operation symbol"
        return Result
    if len(NumbersList) < 2 and len (OperantsList) < 1:
        Result = "Error! Your input contains less than two numbers and no operation symbol"
        return Result
    if len(NumbersList) < 2:
        Result = "Error! Your input does not have two numbers."
        return Result
    if len(NumbersList) > 2:
        Result = "Error! Your input contains more than two numbers"
        return Result
    if len(OperantsList) > 1:
        Result = "Error! Your input contains more than one operation symbol."
        return Result
    if len(OperantsList) < 1:
        Result = "Error! Your input has no operation symbol."
        return Result
    
    # Finding Result
    NumbersList[0] = float(NumbersList[0])
    NumbersList[1] = float(NumbersList[1])
    if OperantsList[0] == "+":
        Result = NumbersList[0] + NumbersList[1]
        return Result
    if OperantsList[0] == "-":
        Result = NumbersList[0] - NumbersList[1]
        return Result
    if OperantsList[0] == "*":
        Result = NumbersList[0] * NumbersList[1]
        return Result
    if OperantsList[0] == "/":
        Result = NumbersList[0] / NumbersList[1]
        return Result

# As the Result is a floating point number, it will have ".0" always.
# This gets rid of it, and converts the number into a string.
def GetRidOfDotZero(FloatingPointNumber):
    FloatingPointNumber = str(FloatingPointNumber)
    List = list(FloatingPointNumber)
    if List[-1] == "0" and List[-2] == ".":
        del List[-1] 
        del List[-1]
        # This executes faster than `del List[-1:-2]`
    Result = ''.join(List)
    return Result
    
while True :
    Input = input()
    ListedInput = list(Input)
    NumbersList = ExtractNumbers(ListedInput)
    print("Numbers: ", NumbersList)
    OperantsList = ExtractOperants(ListedInput)
    print("Operants: ", OperantsList)
    Result = FindResult(NumbersList, OperantsList)
    Result = GetRidOfDotZero(Result) # This function also makes the floating point number a string.
    print("Result: ", Result)