// Problem Link https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++){
        ll N = i * i;
        cout << (N * (N - 1) / 2) - 4 * (i - 1) * (i - 2) << "\n";       
    }
}