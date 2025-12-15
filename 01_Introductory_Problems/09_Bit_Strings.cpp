// Problem Link https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll mod = 1e9 + 7;
    ll sum = 1;
    while(n--){
        sum = (sum * 2) % mod;
    }
    cout << sum << "\n";
}