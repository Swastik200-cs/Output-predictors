#include <iostream>
using namespace std;

void fun(int x = 1, int y = 2) {
    cout << x + y << " ";
}

int main() {
    fun();
    fun(5);
    fun(5, 5);
}
