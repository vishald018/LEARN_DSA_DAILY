#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr  = {6,11,7,4,8,9};
    int second = INT_MIN,i,ans  = INT_MIN;
    // sort(arr.begin(), arr.end());
    // cout<<arr[6-2];
    for (i=0;i<6;i++){
        if(arr[i] > ans) 
        ans = arr[i];
        }
    cout<<ans<<endl;
    for(int i=0; i<6; i++){
    if(arr[i] != ans) {
        second = max(second, arr[i]);
         }
    }
        cout << second << endl; 
}
