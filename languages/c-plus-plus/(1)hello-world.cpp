#include <iostream>
// This line includes the standard input-output stream library in our program, which allows the program to perform input and output operations.
// iostream (input-output stream) is a part of the C++ standard library (or STL).
// The iostream library contains the definitions for `cin` (used to get input) and `cout` (used to give output).
// You will understand how `cout` is used in this example.

int main() {
// This line declares the main function.
// The main function code goes inside "{}".
// In C++, every program must have a main function to operate, which serves as the entry point for execution.
// The end of the main function is the end of the program.

// The int before main() indicates that the function returns an integer value. (int stands for integer).
// You don't need to bother much about that int and returning an integer value.
// Most people get stuck on this line and just get depressed.
// You will understand it easily what it means as you go along.
// For now, just remember that int before the main function says the main function returns an integer.

    std::cout << "Hello World!" << std::endl;
// `cout` can be thought of as the standard output device (usually the console).
// We need to prefix `cout` with `std::` as the cout object belongs to the C++ standard library or STL.
// << is the insertion operator. It just inserts whatever is on its right into whatever is on its left.
// Here, << inserts "Hello World!" into `cout` (the standard output device).
// `endl` is the newline character.
// First, "Hello World" gets inserted into the `cout` then the `endl`, and the cursor goes to the next line.
// We need to prefix `endl` with `std::` like we did with `cout` as it also belongs to the standard library.

    return 0;
// This line marks the end of the main function.
// Every function gets terminated when it returns something.

}

// ----- NOTE FOR PROFESSIONALS ----- //
// I know that some definitions in this example are a bit misleading, but they are intentional, as these examples are targeted toward beginners.
// I might have oversimplified certain areas, but they are intended to get people started.
