// Ques: Write a C++ program to find the largest
// element of a given 2D array of integers.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[2][3] = {{7,8,9},{10,11,12}};
    int result[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    //print
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<< result[i][j]<<" ";
        }
        cout<<endl;
    }

}



