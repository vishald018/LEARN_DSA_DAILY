#include <bits/stdc++.h>
using namespace std;

//Parameterised way

// void add(int i,int sum){
//     if (i < 1)
//     {
//         cout<<sum;
//         return;
//     }
//     add(i-1,sum+i);
    
// }

// int main(){
//     int n;
//     cin>>n;
//     add(n,0);
// }


// Functional Recursion

// #include <bits/stdc++.h>
// using namespace std;

// int add(int n){
//     if (n == 0) return 0;
//     return n + add(n-1);
    
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<< add(n);
// }

// Factorial 
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n == 0 or n==1) return 1;
    return n * fact(n-1);
    
}

int main(){
    int n;
    cin>>n;
    cout<< fact(n);
}