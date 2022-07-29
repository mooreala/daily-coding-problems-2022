/**
 * @file problem649.cpp
 * @author alana moore
 * @brief daily coding problem #649
 * @version 0.1
 * @date 2022-07-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include<string>
using namespace std;

// function declarations
void printProblem();
void findFirstRecurringCharacter(string str);

// functions implementations

int main() {
    printProblem();
    
    // set up example strings
    string exOne = "abcdef"; // should return null
    string exTwo = "acbbac"; // should return b
    string usrEx;

    cout << "Please enter a string to test:";
    cin >> usrEx;

    // test results
    findFirstRecurringCharacter(exOne);
    findFirstRecurringCharacter(exTwo);
    findFirstRecurringCharacter(usrEx);
    
    return 0;
}

void printProblem() {
    cout << "Daily Coding Problem #649" << std::endl;
    cout << "Given a string, return the first recurring character in it, or null if there is no recurring character." << endl;
}

void findFirstRecurringCharacter(std::string str) {
    if (str.empty() || str.length() < 1) return;

    std::cout << "testing string: " << str << std::endl;

    // get first char to check for duplicates
    char c;
    int testIdx = 0;        // for preventing counting the same character as a recurrence
    int smallestIdx = -1;   // for determining with recurrence happened first

    while (testIdx < str.length()) {
        c = str[testIdx];

        for (int i = 1 + testIdx; i < str.length(); i++) {
            if (c == str[i]) {
                if (i < smallestIdx || smallestIdx == -1) {
                    smallestIdx = i;
                }
            }
        }
        testIdx++;
    }

    if (smallestIdx == -1) {
        std::cout << "null" << std::endl;
    } else {
        std::cout << str[smallestIdx] << std::endl;
    }
}