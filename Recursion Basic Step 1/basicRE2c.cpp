#include <bits/stdc++.h>
using namespace std;

void print(int i) {
    if(i < 1)
        return;
    cout <<i<< endl;
    print(i-1);
}

int main() {
    int n, i;
    cin >> n;  
    print(n);
    return 0;
}


