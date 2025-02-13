// Given a string s, return the longest palindromic substring in s.
 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"


#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string longestPalindrome(string& s) {
        int sLen = s.length();
        string sepStr;
        for (int i = 0; i < sLen - 1; i++) {
            sepStr += s[i]; // Adding the character.
            sepStr += "#"; // Adding # between all characters.
        }
        sepStr += s[sLen - 1]; // Adding the last character.
        sepStr += "#"; // Adding the last #.

        // 'start' and 'end' represents the current window.
        int start = 0;
        
    }
};

int main() {
    cout << "Enter a string: ";
    string input;
    cin >> input;
    string output = Solution().longestPalindrome(input);
    cout << "The longest palindromic substring in the input is " << output << ".\n";

    return 0;
}