#include <iostream>
using namespace std;

int Numberofrotate(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int next = (mid+1)%n;
        int pre = (mid+n-1)%n;
        if(arr[mid]<arr[next] && arr[mid]<arr[pre]) return mid;
        else if(arr[start]<arr[mid]) start = mid + 1;
        else if(arr[mid]<=arr[end]) end = mid -1;
    }
}

int BinarySearchLeft(int arr[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int BinarySearchRight(int arr[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}



int main(){
    int arr[] = {3, 4, 5, 1, 2};   // Rotated sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;  // jis element ko search karna hai

    int pivot = Numberofrotate(arr, n);

    cout << "Number of rotations = " << pivot << endl;
    cout << "Minimum element = " << arr[pivot] << endl;

    int ans = -1;
    // Decide kis half me search karna hai
    if (target >= arr[pivot] && target <= arr[n-1]) {
        ans = BinarySearch(arr, pivot, n-1, target);
    } else {
        ans = BinarySearch(arr, 0, pivot-1, target);
    }

    if(ans != -1)
        cout << "Element " << target << " found at index " << ans << endl;
    else
        cout << "Element " << target << " not found" << endl;

    return 0;
}
