// Problem Link https://cses.fi/problemset/task/2431

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

void solve(){
    ull n, a = 1, b = 9, digits = 1;
    cin >> n;
    n--;
    while(n >= (b - a + 1) * digits){
        n -= (b - a + 1) * digits;
        a *= 10;
        b = b * 10 + 9;
        digits++;
    }
    string s = to_string(a + n / digits);
    cout << s[n % digits] << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}