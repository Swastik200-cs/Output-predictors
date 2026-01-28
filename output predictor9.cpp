#include <iostream>
using namespace std;

int main() {
    int x = 0;

    for(int i = 1; i <= 5; i++) {
        if(i % 2 == 0)
            continue;
        x += i;
    }
    cout << x;
}
