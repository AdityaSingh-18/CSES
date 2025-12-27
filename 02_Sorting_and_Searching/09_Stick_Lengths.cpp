// Problem Link https://cses.fi/problemset/task/1074

// O(N log N)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)    cin >> i;
    sort(a.begin(), a.end());
    ll median = a[n / 2];
    ll totalSum = 0;
    for (int i = 0; i < n; i++){
        totalSum += llabs(a[i] - median);
    }
    cout << totalSum << "\n";
}


/*

// O(N)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)    cin >> i;
    nth_element(a.begin(), a.begin() + n / 2, a.end());
    ll median = a[n / 2];
    ll totalSum = 0;
    for (int i = 0; i < n; i++){
        totalSum += llabs(a[i] - median);
    }
    cout << totalSum << "\n";
}

*/