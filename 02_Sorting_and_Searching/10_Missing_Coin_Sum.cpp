// Problem Link https://cses.fi/problemset/task/2183

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)    cin >> i;
    sort(a.begin(), a.end());
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if(a[i] - sum > 1)     break;
        sum += a[i];
    }
    cout << sum + 1 << "\n";
}