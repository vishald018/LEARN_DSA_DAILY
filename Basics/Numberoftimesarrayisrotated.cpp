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



int main(){
   int arr[] = {3, 4, 5, 1, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<Numberofrotate(arr,n);
}