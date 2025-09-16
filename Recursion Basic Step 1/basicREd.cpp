// // Print Linearly from 1 to N ( BUT BY BACKTRACKING )
// #include <bits/stdc++.h>
// using namespace std;

// void print(int i,int n){
//     if(i<1) return;
//     print(i-1,n);
//     cout<<i<<endl;   
// 
// int main(){
//     int n;
//     cin>>n;
//     print(n,n);
// }



// for n to 1 

#include <bits/stdc++.h>
using namespace std;

void print(int i){
    if(i < 1) return;   // base case
    cout << i << endl;  // pehle print karo
    print(i - 1);       // fir chhote number ki call
}

int main(){
    int n;
    cin >> n;
    print(n);
}
