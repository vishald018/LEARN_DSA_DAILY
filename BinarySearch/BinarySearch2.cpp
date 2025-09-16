#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key){
      // start , mid , end;
      int start=0,mid;
      int end = 5;
      while(start<=end){
         

         mid = (start+end)/2;
         if(arr[mid] == key){
            return mid;
         }
         else if(arr[mid]<key){
            end = mid-1;
         }
         else start = mid+1;
      }
    return -1;
}
int main(){
    int key = 2;
    int arr[6] = {17,14,11,7,3,2};
    cout<<BinarySearch(arr,key);

}