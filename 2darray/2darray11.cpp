#include <iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};  // yeh row ise value jayengi
    // int brr[3][3] = {1,2,3,4,5,6,7,8,9} // yeh bhi thik hai 
    // rows --> 3
    // column --> 3
    

    //ek toh yeh tareeka hai
    // for(int i=0;i<=2;i++){
    //     cout<<arr[0][i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=2;i++){
    //     cout<<arr[1][i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=2;i++){
    //     cout<<arr[2][i]<<" ";
    // }


    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}

