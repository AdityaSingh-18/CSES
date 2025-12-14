// Problem Link https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, x;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    for (int i = 1; i < n; i++){
        cin >> x;
        sum = sum - x;
    }
    cout << sum << "\n";
}