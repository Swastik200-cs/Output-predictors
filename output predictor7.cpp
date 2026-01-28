#include <iostream>
using namespace std;

void update(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] += i;
    }
}

int main() {
    int a[] = {1, 2, 3};
    update(a, 3);

    for(int i = 0; i < 3; i++)
        cout << a[i] << " ";
}
