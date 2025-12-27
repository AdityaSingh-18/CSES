// Problem Link https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m, k;
    cin >> n >> m;
    multiset<int> a;
    for (int i = 0; i < n; i++){
        cin >> k;
        a.insert(k);
    }
    while(m--){
        int x;
        cin >> x;
        auto it = a.upper_bound(x);
        if(it != a.begin()){
            it--;
            cout << *it << "\n";
            a.erase(it);
        }
        else    cout << -1 << "\n";
    }
}