// Ques : Write a program to store roll number and
// marks obtained by 4 students side by side in a
// matrix.

#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}