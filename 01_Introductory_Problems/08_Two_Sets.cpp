// Problem Link https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if(sum % 2 == 0){
        cout << "YES\n";
        vector<ll> a, b;
        ll need = sum / 2;
        for (int i = n; i >= 1; i--){
            if(need >= i){
                a.push_back(i);
                need -= i;
            }
            else    b.push_back(i);
        }
        int x = a.size();
        int y = b.size();
        cout << x << endl;
        for (int i = 0; i < x; i++){
            cout << a[i] << " \n"[i == x - 1];
        }
        cout << y << endl;
        for (int i = 0; i < y; i++){
            cout << b[i] << " \n"[i == y - 1];
        }
    } 
    else    cout << "NO\n";
}