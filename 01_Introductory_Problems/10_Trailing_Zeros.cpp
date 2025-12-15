// Problem Link https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll j = 5, sum = 0;
    while(j <= n){
        sum += (n / j);
        j *= 5;
    }
    cout << sum << "\n";
}