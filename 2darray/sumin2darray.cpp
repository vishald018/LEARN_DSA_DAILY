// Ques: Write a C++ program to find the largest
// element of a given 2D array of integers.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // max
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;

}



