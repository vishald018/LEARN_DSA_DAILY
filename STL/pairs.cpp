#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p1 = {1,3};
    cout << p1.first << " " << p1.second << endl;

    pair<int , pair<int , int>> p2 = {1,{3,5}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int , int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second << endl;
}

int main(){
    explainPair();
    return 0;
}
