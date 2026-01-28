#include <iostream>
using namespace std;

int fun(int x) {
    static int y = 1;
    y = y * x + 1;
    return y;
}

int main() {
    int a = 0, b = 2;

    for(int i = 1; i <= 3; i++) {
        a = fun(i);
        b += a;
        cout << a << " " << b << endl;
    }

    cout << "Final Values: " << a << " " << b;
    return 0;
}
