#include<iostream>
#include<vector>


int main() {
    int n;
    std::cout << "How many numbers of the Fibonacci sequence do you want?\n";
    std::cin >> n;

    std::cout << "Here is it:\n\n";

    std::vector<int> sequence = {0, 1};

    if (n > 0) {
        std::cout << "0\n";
    }

    int i = 1;
    while (i < n) {
        int sequenceSize = sequence.size();
        int numberToOutput = sequence[sequenceSize - 1] + sequence[ sequenceSize - 2];
        sequence.push_back(numberToOutput);
        std::cout << numberToOutput << std::endl;
        ++i;
    }




    // For testing:
    std::cin >> n;
    return 0;
}
