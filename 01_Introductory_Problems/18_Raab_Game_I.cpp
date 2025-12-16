// Problem Link https://cses.fi/problemset/task/3399
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    if(((x > 0) == (y > 0)) && (n >= (x + y))){
        int equal = n - (x + y);
        cout << "YES\n";
        for (int i = 1; i <= n; i++)    cout << i << " \n"[i == n];
        for (int i = 1; i <= equal; i++)    cout << i << " \n"[i == n];
        for (int i = 1; i <= y; i++)     cout << i + x + equal << " ";
        for (int i = 1; i <= x; i++)  cout << i + equal << " \n"[i == x]; 
    }
    else    cout << "NO\n";
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
