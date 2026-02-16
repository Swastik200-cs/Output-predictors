#include <iostream>
#include <string>
using namespace std;

string utility(int a, int b, int opr) {
    if (opr == 1) {
        return to_string(a + b);
    }
    else if (opr == 2) {
        return to_string(a - b);
    }
    else if (opr == 3) {
        return to_string(a * b);
    }
    else {
        return "Invalid Input";
    }
}

// Let the input of  a = 1, b = 2, opr = 3 // 