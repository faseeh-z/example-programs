# How To Set Up SFML

Setting up your development environment can be tedious. But with this tutorial, you'll be able to do it easily.

## Setup SFML and MinGW for Windows

Most of the SFML examples in here are based on SFML 2.6.2. But if you want, you can download the latest version. Click the link below to go to the download page.
https://www.sfml-dev.org/download/sfml/2.6.2/

You need a compiler to compile your code. If you download the compiler from any other source, the SFML version might not match exactly and may introduce conflicts. So I recommend to download the Compiler from the SFML download page itself. Go to the download page with the same link and you will see `WinLibs MSVCRT 13.1.0 (32-bit)` and `WinLibs MSVCRT 13.1.0 (64-bit)` listed on the top. Click the link based on whether you have a 32-bit or 64-bit system. **Ensure that the SFML and MinGW architecture is matching.**

After downloding the both, extract each of the files and move it to the desired location. Now, we need to add the bin folders of each to the systems path.

On the Windows search bar, type *Edit the system environment variables* and click on the link that appears. This would open a window titled *System Properties*.

On that window, click *Environment Variables* button and cilck on the `path` variable from the list. Then click edit. On the window which appears, add the paths to the `bin` folder of MinGW and SFML by clicking the *new* button. Then click Ok. Now, the setup is complete!

You can use your preferrd code editor to edit your application.

## How to Compile the Code

To compile the code, we use something called a `MakeFile`. It is a file which which has no extension, only the name `MakeFile`. We can define how we need our code to be compiled in the MakeFile. But to read and execute it, we need to install `make`.

Installing make it the easiest with Chocolatey. Install Chocolatey if you do not have it installed in your system. To install make, open the cmd and type the command `choco install make`.

Now, its time to create the MakeFile. Create a new file named `MakeFile`. The content may look like this.

```MakeFile
# Define paths
SFML_DIR = c:\SFML-2.6.2
CXX = g++
CXXFLAGS = -std=c++11 -Wall -I$(SFML_DIR)/include
LDFLAGS = -L$(SFML_DIR)/lib -lsfml-graphics -lsfml-window -lsfml-system -mwindows

# Define the target executable name
TARGET = bin/dot_smash

# Define the source files
SRC = src/main.cpp

# Define the object files (from source files)
OBJ = $(SRC:.cpp=.o)

# Default target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ) $(LDFLAGS)

# Commands to run after compilation.
	del /f /q src\*.o

# Compile the object files
%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@
```

Now, we can compile our code with just one single command `make`.