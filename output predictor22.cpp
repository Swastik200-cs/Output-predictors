#include <iostream>
using namespace std;

// User function template
template <class T>
T largest(T arr[], int n) {
    T maxElement = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}

int main() {
    int n, K;
    cin >> n >> K;

    if (K == 1) {  
        // Integer array
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << largest(arr, n) << endl;
    } 
    else if (K == 2) {  
        // Float array
        float arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << largest(arr, n) << endl;
    }

    return 0;
}
