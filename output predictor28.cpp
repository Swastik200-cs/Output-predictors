#include <iostream>
using namespace std;

class Solution {
  public:
    void arithmeticOperations(int x, int y) {
        int p = x + y;
        int q = x - y;
        int r = x * y;
        int s = x / y;
        int t = x % y;

        cout << p << " " << q << " " << r << " " << s << " " << t;
    }
};
int main() {
    int x, y;
    cin >> x >> y;

    Solution obj;
    obj.arithmeticOperations(x, y);

    return 0;
}