// Problem Link https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    set<int> a;
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << "\n";
}