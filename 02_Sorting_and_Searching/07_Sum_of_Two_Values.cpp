// Problem Link https://cses.fi/problemset/task/1640

// USING TWO POINTERS
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    int l = 0, r = n - 1; 
    while(l < r){
        ll sum = a[l].first + a[r].first;
        if(sum == k){
            cout << a[l].second << " " << a[r].second << "\n";
            return;
        }
        if(sum < k)    l++;
        else    r--;
    }
    cout << "IMPOSSIBLE\n";
}
 
int main(){
    solve();
}


/*
//  USING MAP
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> m;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if(m[k - a[i]]){
            cout << m[k - a[i]] << " " << i + 1 << "\n";
            return;
        }
        m[a[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
}

int main(){
    solve();
}
*/


/*
// USING UNORDERED MAP
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map<ll, int> map;
    for (int i = 0; i < n; i++){
        int need = k - a[i];
        if(map.find(need) != map.end()){
            cout << map[need] << " " << i + 1 << "\n";
            return;
        }
        map[a[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
}
 
int main(){
    solve();
}
*/