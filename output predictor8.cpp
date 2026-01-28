#include <iostream>
using namespace std;

class Count {
    static int c;
public:
    Count() {
        c++;
        cout << c << " ";
    }
};

int Count::c = 0;

int main() {
    Count a;
    Count b;
    Count c;
}
