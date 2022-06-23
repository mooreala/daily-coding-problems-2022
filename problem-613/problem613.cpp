/*
* problem613.cpp
* 
* Main function for problem 613.
*/

#include "PrefixMapSum.cpp"
#include <cassert>

int main() {
    cout << "Daily Coding Problems #613\n" << endl;

    // Declare obj of PrefixMapSum type
    PrefixMapSum pms;
    pms.printProblem();

    // Provided test code
    pms.insert("columnar", 3);
    assert(pms.sum("col") == 3);
    cout << "Test 1 Success" << endl;

    pms.insert("column", 2);
    assert(pms.sum("col") == 5);
    cout << "Test 2 Success" << endl;

    return 0;
}