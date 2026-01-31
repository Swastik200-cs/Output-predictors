#include <iostream>
using namespace std;

int main() {
    int x = 0;

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            if(j == i)
                continue;
            if(j > i)
                break;
            x += i + j;
        }
    }
    cout << x;
}
