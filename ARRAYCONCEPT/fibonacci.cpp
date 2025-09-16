#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int i,n;
    cin>>n;
    int arr[1000];
    arr[0]= 0;
    arr[1] = 1;
    for(int i=2;i<=n-1;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];

    }
