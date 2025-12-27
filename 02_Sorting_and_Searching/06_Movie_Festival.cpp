// Problem Link https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        a.push_back({y, x});
    }
    sort(a.begin(), a.end());
    int prev = -1, count = 0;
    for (int i = 0; i < n; i++){
        if(a[i].second >= prev){
            prev = a[i].first;
            count++;
        }
    }
    cout << count << "\n";
}