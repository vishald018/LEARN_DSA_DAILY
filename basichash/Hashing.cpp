// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13] = {0};
//     for(int i = 0;i<n;i++){
//         hash[arr[i]] += 1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>> number; //fetch
//         cout<<hash[number] << endl;
//     }

//         return 0;
// }






//for integer based declaration the size of array can be arr[10^6] inside main for boolean here [10^7].
//for integer based declaration the size of array can go to arr[10^7] if decleared globally for boolean here [10^8].



// character hashing 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;

//     //precomputing this is 
//     int hash[26]={0};
//     for (int i=0;i<s.size();i++){
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         //fetch
//         cout<<hash[c-'a']<<endl;  //hash[c-a] = yeh index leke aa rha hai like a-a = 0 b-a =1
        
//     }
//     return 0;
    
// }




/// Calculating the number frequency using the map <int int> 


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     map<int , int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }


//     //queries


//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         //fetch
//         cout<<mpp[number]<<endl;

//     }

// }



// character counting 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;  // input string

//     // Precompute frequency using map
//     map<char, int> mpp;
//     for (int i = 0; i < s.size(); i++) {
//         mpp[s[i]]++;  // increment frequency of character s[i]
//     }

//     // Queries
//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;   // character query
//         cout << mpp[c] << endl;  // print frequency
//     }

//     return 0;
// }
