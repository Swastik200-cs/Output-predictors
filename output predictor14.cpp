#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A "; }
    ~A() { cout << "a "; }
};

class B {
    A a1;
public:
    B() { cout << "B "; }
    ~B() { cout << "b "; }
};

int main() {
    {
        B obj;
    }
    cout << "End ";
}
