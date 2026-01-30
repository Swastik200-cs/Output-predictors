#include <iostream>
using namespace std;

int fun(int n) {
    static int x = 1;
    if(n == 0)
        return x;
    cout << x << " ";
    x += n;
    return fun(n - 1);
}

int main() {
    cout << fun(3);
}
