#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    int number = stoi(num);
    cout << number * 2;
    return 0;
}