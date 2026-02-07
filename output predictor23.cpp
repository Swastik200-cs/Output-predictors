#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    int binaryToDecimal(string &b) {
        int result = 0;

        for (char bit : b) {
            result = result * 2 + (bit - '0');
        }

        return result;
    }
};

int main() {
    string b;
    cin >> b;

    Solution obj;
    cout << obj.binaryToDecimal(b);

    return 0;
}
