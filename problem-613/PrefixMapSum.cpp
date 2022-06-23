/*
* PrefixMapSum.cpp
*
* Implementing PrefixMapSum methods.
*/

#include "PrefixMapSum.h"
#include <iostream>
using namespace std;

void PrefixMapSum::printProblem() {
    cout << "Implement a PrefixMapSum class with the following methods:" << endl;
    cout << "\tinsert(key: str, value: int): Set a given key's value in the map. If the key already exists, overwrite the value." << endl;
    cout << "\tsum(prefix: str): Return the sum of all values of keys that begin with a given prefix.\n" << endl;
}

void PrefixMapSum::insert(string key, int value) {
    prefixMap[key] = value;
}

int PrefixMapSum::sum(string prefix) {
    int sum = 0;
    int size = prefix.size();

    for (auto i = prefixMap.begin(); i != prefixMap.end(); i++) {
        // get first key
        string thisKey = i -> first;
        // check if the first substring of the same size as provided prefix match
        if (thisKey.substr(0, size) == prefix) {
            sum += prefixMap[thisKey];
        }
    }

    return sum;
}