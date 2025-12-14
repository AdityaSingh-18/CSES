// Problem Link https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

void solve(){
    ull i, j;
    cin >> i >> j;
    if(i > j){
        if(i % 2 == 0)  cout << i * i - (j - 1) << "\n";
        else    cout << (i - 1) * (i - 1) + j << "\n";
    }
    else{
        if(j % 2 == 0)  cout << (j - 1) * (j - 1) + i << "\n";
        else    cout << j * j - (i - 1) << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}