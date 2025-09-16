#include <bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if(i > n)
        return;
    cout <<i<< endl;
    print(i + 1, n);
}

int main() {
    int n, i;
    cin >> n;  
    cin >> i; // first n, then starting value i
    print(i, n);
    return 0;
}


