#include <bits/stdc++.h>
using namespace std;

// pass by reference
//Here the function takes the actual value address and manipulates or operates on the actual value 
void doSomething(string &s){
    s[0] = 't';
    cout<<s<<endl;
}

int main() {
    string s = "raj";
    doSomething(s);
    cout<< s << endl;
    return 0;
}
