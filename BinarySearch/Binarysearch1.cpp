#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key){
      // start , mid , end;
      int start=0, end = n-1,mid;
      while(start<=end){
         //Mid find karo
         // arr[mid] == key
         //arr[mid] < key

         mid = (start+end)/2;
         if(arr[mid] == key){
            return mid;
         }
         else if(arr[mid<key]){
            start = mid+1;
         }
         else end = mid-1;
      }
    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    int key;
    cout<<"Enter the elements: ";
    cin>>key;

    cout<<BinarySearch(arr,n,key);

}