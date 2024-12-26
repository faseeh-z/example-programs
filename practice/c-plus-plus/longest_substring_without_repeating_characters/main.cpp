// Given a string s, find the length of the longest substring without repeating characters.


// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include<iostream>
#include<string>
#include<conio.h>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        unordered_map<char, int> charIndex; // Stores the last index of each character.
        int maxLen = 0; // Maximum length of the substring.
        int start = 0; // Start index of the current substring.
        for (int end = 0; end < s.length(); end++) {
            auto it = charIndex.find(s[end]);
            if (it != charIndex.end() && it->second >= start) {
                start = it->second + 1; // Update start.
            }
            charIndex[s[end]] = end; // Update the last index of the current character.

            maxLen = max(maxLen, end - start + 1); // max assings the value only if the value is larger than LHS.
        }
        return maxLen;
    }
};

int main() {
    cout << "Enter a string: ";
    string s;
    cin >> s;

    int output = Solution().lengthOfLongestSubstring(s);
    cout << "The length of the longest substring is " << output << ".\n";
    _getch();
}
