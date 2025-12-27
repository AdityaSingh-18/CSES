// Problem Link https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        a.push_back({x, 1});
        a.push_back({y, -1});
    }
    sort(a.begin(), a.end());
    int maxCount = 0, count = 0; 
    for (int i = 0; i < 2 * n; i++){
        count += a[i].second;
        maxCount = max (maxCount, count);
    }
    cout << maxCount << "\n";
}