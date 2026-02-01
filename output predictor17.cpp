#include <iostream>
using namespace std;

int fun() {
    cout << "Fun ";
    return 10;
}

int main() {
    cout << sizeof(fun()) << " ";
}
