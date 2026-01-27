#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    **q = 25;
    cout << a;
    return 0;
}
