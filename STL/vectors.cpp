#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // dynamically increase size and insert 2

    vector<pair<int , int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector <int> v(5,100);  // 5 instances of 100

    vector <int> v(5);    //size

    vector <int> v1(5,20);   // 5 instances of 20
    vector <int> v2(v1);   // v2 is copy of v1

    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) <<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector <int>::iterator it = v.end() 

    //vector <int>::iterator it = v.rend()

    //vector <int>::iterator it = v.rbegin()

    cout<<v[0]<<" ";
    cout<<v.back()<<" ";


    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    for (auto it = v.begin(); it != v.end(); it++){
        cout<< it <<" ";
    }

    //{10,20,12,23}
    v.erase(v.begin()+1);   // 10,12,23


    //{10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); //(start,end)



    // Insert
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}

    cout<<v.size();


    //{10,20}
    v.pop_back(); //{10}

    //v1 -> {10,20}
    //v2 -> {30,40}
    
    v1.swap(v2); //v1 -> {30,40},v2 -> {10,20}

    v.clear(); //erases entire vector

    cout<<v.empty();


}



void explainlist(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4}

    ls.emplace_front(); //{2,4}

    // rest functions are same as vectors
}


void explainstack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}


    cout<< st.top();//prints 5

    st.pop(); // st looks like {3,3,2,1}
    cout<<st.top(); //3
    cout<<st.size(); //4
    cout<<st.empty();

    stack <int>st1,st2;
    st1.swap(st2);
}


void explainQueue() {
    queue<int> q;

    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}  (emplace constructs 4 in place)

    cout << q.back() << endl;   // prints 4 (last element)
    
    q.back() += 5;              // modifies last element (4+5=9)
    cout << q.back() << endl;   // prints 9

    cout << q.front() << endl;  // prints 1 (first element)

    q.pop();                    // removes front -> {2, 9}
    cout << q.front() << endl;  // prints 2

    // Other functions: size(), swap(), empty() work like stack
}




#include <bits/stdc++.h>
using namespace std;

void explainPQ() {
    // By default -> Max Heap
    priority_queue<int> pq;

    pq.push(5);       // {5}
    pq.push(2);       // {5,2}
    pq.push(8);       // {8,2,5}
    pq.emplace(10);   // {10,8,5,2}

    cout << pq.top() << endl;   // prints 10 (largest element)

    pq.pop();                   // removes 10 -> {8,5,2}
    cout << pq.top() << endl;   // prints 8


    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);       // {5}
    pq2.push(2);       // {2,5}
    pq2.push(8);       // {2,5,8}
    pq2.emplace(10);   // {2,5,8,10}

    cout << pq2.top() << endl;  // prints 2 (smallest element)
}



void explainSet() {
    set<int> st;

    st.insert(1);     // {1}
    st.emplace(2);    // {1, 2}
    st.insert(2);     // {1, 2}  (no duplicates allowed)
    st.insert(4);     // {1, 2, 4}
    st.insert(3);     // {1, 2, 3, 4}

    // Elements in set are always sorted and unique

    // ---------- Finding Elements ----------
    auto it = st.find(3);  // points to 3 (exists)
    auto it2 = st.find(6); // returns st.end() (not found)

    // ---------- Erasing ----------
    st.erase(5);   // erases element 5 if it exists (logarithmic time)

    int cnt = st.count(1); // returns 1 if present, else 0

    // erase using iterator
    auto it3 = st.find(3);
    if (it3 != st.end()) {
        st.erase(it3);  // erases 3
    }

    // Final set = {1, 2, 4}
}





void explainMultiSet() {
    multiset<int> ms;

    ms.insert(1);   // {1}
    ms.insert(1);   // {1, 1}
    ms.insert(2);   // {1, 1, 2}
    ms.insert(3);   // {1, 1, 2, 3}

    // Erase by value (removes ALL 1s)
    ms.erase(1);    // {2, 3}

    // Insert again
    ms.insert(1);   // {1, 2, 3}
    ms.insert(1);   // {1, 1, 2, 3}

    int cnt = ms.count(1);  // returns 2 (two 1’s present)

    // Erase only one occurrence
    ms.erase(ms.find(1));   // {1, 2, 3}

    // Erase range -> here erases first two elements
    ms.erase(ms.find(1), next(ms.find(1), 2)); // careful with next()

    // Rest functions same as set
}

void explainMap() {
    // Different kinds of maps
    map<int, int> mpp1;                      // key: int, value: int
    map<int, pair<int, int>> mpp2;           // key: int, value: pair<int,int>
    map<pair<int, int>, int> mpp3;           // key: pair<int,int>, value: int

    map<int, int> mpp;   // using this for demo

    // ---------- Insert ----------
    mpp[1] = 2;              // key=1, value=2
    mpp.emplace(3, 1);       // key=3, value=1
    mpp.insert({2, 4});      // key=2, value=4

    // Map is sorted by key (ascending order by default)
    // Current map: {1 -> 2, 2 -> 4, 3 -> 1}

    // ---------- Traversal ----------
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // ---------- Access ----------
    cout << mpp[1] << endl;   // prints 2
    cout << mpp[5] << endl;   // prints 0 (default constructed since key=5 not present)

    // Note: mpp[5] also CREATES the key with default value 0
}



void explainMultiMap() {
    multimap<int, int> mpp;   // key: int, value: int
    // 🔹 Unlike map, multimap allows duplicate KEYS
    // 🔹 Keys are still sorted

    // ---------- Insert ----------
    mpp.insert({1, 2});    // {1 -> 2}
    mpp.insert({1, 3});    // {1 -> 2, 1 -> 3} (duplicate key allowed)
    mpp.emplace(2, 4);     // {1 -> 2, 1 -> 3, 2 -> 4}
    mpp.insert({3, 5});    // {1 -> 2, 1 -> 3, 2 -> 4, 3 -> 5}

    // ---------- Traversal ----------
    cout << "Multimap contents:\n";
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    // Output (keys sorted, duplicates kept):
    // 1 2
    // 1 3
    // 2 4
    // 3 5

    // ---------- Access ----------
    // ⚠️ mpp[key] is NOT available in multimap (no [] operator)
    // because multiple values may exist for the same key

    // ---------- Find ----------
    auto it = mpp.find(1);   // finds the FIRST occurrence of key=1
    if (it != mpp.end())
        cout << "Found: " << it->first << " " << it->second << endl;

    // ---------- Erase ----------
    mpp.erase(1);  
    // removes ALL pairs with key=1 → remaining {2 -> 4, 3 -> 5}

    // Insert again for range erase demo
    mpp.insert({1, 10});
    mpp.insert({1, 20});
    // {1 -> 10, 1 -> 20, 2 -> 4, 3 -> 5}

    // Erase only one occurrence (iterator)
    auto it2 = mpp.find(1);
    if (it2 != mpp.end()) mpp.erase(it2);

    // Erase range of equal keys
    mpp.erase(mpp.lower_bound(1), mpp.upper_bound(1));
    // removes all remaining 1’s

    // Final contents: {2 -> 4, 3 -> 5}
}




// Custom comparator for sorting pairs
bool comp(pair<int,int> a, pair<int,int> b) {
    if (a.second < b.second) return true;        // sort by second element (ascending)
    if (a.second > b.second) return false;
    return a.first > b.first; // if second is same, sort first in descending
}

void explainExtra() {
    // ---------- SORT ----------
    int a[] = {4, 2, 1, 5, 3};
    int n = 5;

    sort(a, a+n); // Sort full array → {1,2,3,4,5}
    sort(a+2, a+4); // Sort only range [a+2, a+4)

    vector<int> v = {4, 2, 1, 5, 3};
    sort(v.begin(), v.end()); // Sort vector → {1,2,3,4,5}

    // ---------- SORT with Comparator ----------
    pair<int,int> arr[] = {{1,2}, {2,1}, {4,1}};
    int m = 3;

    sort(arr, arr+m, comp);
    // Sorted by second element
    // If second same → first element in descending order

    // ---------- Built-in Popcount ----------
    int num = 7; // 111 in binary
    int cnt = __builtin_popcount(num);  
    // counts set bits (here 3)

    long long bigNum = 165786578687LL;
    int cnt2 = __builtin_popcountll(bigNum); 
    // counts set bits in long long

    // ---------- Next Permutation ----------
    string s = "123";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    // prints all permutations of "123" in lexicographic order
}




int main(){
    explainVector();
    return 0;
}
