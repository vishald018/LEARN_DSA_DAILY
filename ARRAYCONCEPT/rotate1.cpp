#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // save last element
    int last = arr[n - 1];

    // shift elements right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // put last element at first
    arr[0] = last;

    // print rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }   
    cout << endl;

    return 0;
}
