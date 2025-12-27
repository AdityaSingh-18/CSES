// Problem Link https://cses.fi/problemset/task/2216

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; 
    cin >> n;
    ll x;
    vector<ll> a(n + 1);
    for (int  i = 1; i <= n; i++){
        cin >> x;
        a[x] = i;
    }
    int round = 1;
    for (int i = 1; i < n; i++){
        if(a[i] > a[i + 1])     round++;    
    }
    cout << round << "\n";
}