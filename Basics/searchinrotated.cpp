#include <iostream>
using namespace std;

int searchinrotated(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int next = (mid+1)%n;
        int pre = (mid+n-1)%n;
        if(arr[mid]==target) return mid;
        else if(arr[start]<arr[mid]) start = mid + 1;
        else if(arr[mid]<=arr[end]) end = mid -1;
    }
}



int main(){
   int arr[] = {11,12,15,18,2,5,6,8};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<searchinrotated(arr,n,5);
}