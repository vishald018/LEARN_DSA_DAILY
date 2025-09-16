#include <iostream>
#include <climits>
using namespace std;
int main(){
    // int arr[] = {45,33,23,2,4,7};
    // int i,j;
    // int min = INT_MAX;
    // for(int i=0;i<6;i++){
    //     if(arr[i]<min){
    //             min = arr[i];
    //             }
    // }
    // cout<<min;
     int arr[] = {45,33,23,2,4,7};
     int i;
     int max = INT_MIN;
     for(i=0;i<6;i++){
        if(arr[i]>max){
            max = arr[i];
        }
       
     }
      cout<<max;
}