// CSES https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (auto &i : a)    cin >> i;
    for (int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            sum += a[i] - a[i + 1];
            a[i + 1] = a[i];
        }
    }
    cout << sum << "\n";
}