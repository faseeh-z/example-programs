#include<iostream>
#include<string>
#include<vector>

const std::string DISCLAIMER = "Input syntax:\n    firstNumber operationSymbol(+-*/) secondNumber\neg:\n    input: 1+2\n\n    output:  3\n------------------\n\n";

// Outputs chars from a char vector.
int coutCharsVector (std::vector<char>& vec) {
    for (char c: vec) {
        std::cout << c << ' ';
    }
    std::cout << std::endl;
    return 0;
}
// Outputs chars from a char vector.
int coutIntVector (std::vector<int>& vec) {
    for (int c: vec) {
        std::cout << c << ' ';
    }
    std::cout << std::endl;
    return 0;
}
// Takes a string and returns it's characters in a char vector.
std::vector<char> splitStringToChars(std::string& str){
    std::vector<char> charVector;
    for (char c: str) {
        charVector.push_back(c);
    }
    return charVector;
}

// Takes a char vector and return a vector containing it's '+', '-', '*', '/' chars in order if any.
std::vector<char> extractOperationSymbolsFromVector(std::vector<char>& vec) {
    std::vector<char> charVector; 
    for (char c: vec) {
        if (c == '+') {
            charVector.push_back(c);
            continue;
        }
        if (c == '-') {
            charVector.push_back(c);
            continue;
        }
        if (c == '*') {
            charVector.push_back(c);
            continue;
        }
        if (c == '/') {
            charVector.push_back(c);
            continue;
        }
    }
    return charVector;
}

// Takes a char vector and extract consecutive numbers from it and return an int vector.
std::vector<int> extractConsecutiveNumsFromCharVector (std::vector<char>& charVector) {
    std::vector<int> numsVector;
    std::string temp;

    for (char c: charVector ) {
        if (isdigit(c)) {
            temp += c;
            continue;
        } else if (!temp.empty()) {
            numsVector.push_back(stoi(temp));
            temp.clear();
        }
    }
    if (!temp.empty()) {
        numsVector.push_back(stoi(temp));
    }

    return numsVector;
}

int main(){
    std::cout << DISCLAIMER;
    while (true) {
        std::cout << "Input: ";
        std::string input;
        std::getline(std::cin, input);

        std::vector<char> inputChars = splitStringToChars(input); // Input Characters Vector.
        std::vector<char> operationSymbols = extractOperationSymbolsFromVector(inputChars);
        std::vector<int> consecutiveNums = extractConsecutiveNumsFromCharVector(inputChars);

        // Finding errors
        bool foundError = false;
        if (operationSymbols.size() > 1) {
            std::cout << "Error! Your input has more than one operation symbol." << std::endl;
            foundError = true;
        }
        if (consecutiveNums.size() > 2) {
            std::cout << "Error! Your input has more than 2 numbers." << std::endl;
            foundError = true;
        }

        // Find result if !foundError.
        int result = 0;
        bool foundResult = false;
        if (!foundError) {
            for (char c: inputChars) {
                if (c == '+') {
                    result = consecutiveNums[0] + consecutiveNums[1];
                    foundResult = true;
                    break;
                }
                if (c == '-') {
                    result = consecutiveNums[0] - consecutiveNums[1];
                    foundResult = true;
                    break;
                }
                if (c == '*') {
                    result = consecutiveNums[0] * consecutiveNums[1];
                    foundResult = true;
                    break;
                }
                if ((c == '/') && (consecutiveNums[1] != 0)) {
                    result = consecutiveNums[0] / consecutiveNums[1];
                    foundResult = true;
                    break;
                }
            }
        }

        if (foundResult && !foundError) {
            std::cout << "The result is " << result << std::endl;
        } else if (!foundError) {
            std::cout << "Sorry, we are unable to find the result for this input." << std::endl;
        }
        std::cout << std::endl << "------------------" << std::endl;
    }
    return 0;
}