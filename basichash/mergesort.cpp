#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    // dono half arrays ko compare karke merge karna
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // agar left part me elements bache ho
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // agar right part me elements bache ho
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // ab temp se original array me copy karna
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end) {
    if (st >= end) return;

    int mid = (st + end) / 2;

    // left half sort karo
    mergeSort(arr, st, mid);
    // right half sort karo
    mergeSort(arr, mid + 1, end);
    // dono ko merge karo
    merge(arr, st, mid, end);
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
