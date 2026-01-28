#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A ";
    }
};

class B {
    A a;
public:
    B() {
        cout << "B ";
    }
};

int main() {
    B obj;
}
