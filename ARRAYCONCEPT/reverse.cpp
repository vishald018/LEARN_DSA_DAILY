#include <iostream>
using namespace std;
int main(){
    int arr[]  = {6,11,7,4,8,9};
    int arr2[6];
    for(int i=0;i<6;i++){
        arr2[5-i] = arr[i];
    }
    for (int i=0;i<6;i++){
        cout<<arr2[i]<<" ";
    }
}
