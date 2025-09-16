#include <iostream>
using namespace std;
int main(){
    int target;
    bool flag = true;
    cout<<"Enter the target: ";
    cin>>target;
    int arr[] = {12,22,32,45,21,5};
    for (int i=0;i<6;i++){
        if(arr[i] == target){
            cout<<"Found at :"<<i;
            flag = false;
        }
       
    }
    if(flag==true) cout<<"-1";
    
}