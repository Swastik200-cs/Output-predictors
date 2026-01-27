#include <iostream>
using namespace std;

int fun(int x) {
    static int y = 0;
    y += x;
    return y;
}

int main() {
    int a = 1;
    for(int i = 1; i <= 3; i++) {
        a = fun(i);
        cout << a << " ";
    }
}
