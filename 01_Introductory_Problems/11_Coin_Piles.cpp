// Problem Link https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a, b;
    cin >> a >> b;
    int x = min (a, b);
    int y = max (a, b);
    if((x * 2) >= y && (a + b) % 3 == 0)    cout << "YES\n";
    else    cout << "NO\n";  
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}