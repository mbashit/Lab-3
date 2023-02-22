// Lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    int i = 0;
    int j = word.length() - 1;
    while (i < j) {
        if (word[i] != word[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string text;
    cout << "Enter a text string: ";
    getline(cin, text);

    int wordCount = 0;
    string word;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ' || text[i] == '.') {
            if (isPalindrome(word)) {
                wordCount++;
            }
            word = "";
        }
        else {
            word += text[i];
        }
    }

    cout << "Number of palindrome words: " << wordCount << endl;
    return 0;
}
