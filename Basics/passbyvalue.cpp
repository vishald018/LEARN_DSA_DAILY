#include <bits/stdc++.h>
using namespace std;

// pass by value
//Here the function took the copy of num but not the entire num
void doSomething(int num){
    cout<< num <<endl;
    num += 5;
    cout<< num <<endl;
    num += 5;
    cout<< num <<endl;
    num += 5;
    cout<< num <<endl;

}

int main() {
    int num = 10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}
