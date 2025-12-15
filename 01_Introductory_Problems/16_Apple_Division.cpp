// Problem Link https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum = 0;

void getClosestSum(const vector<ll> &a, int n, int index, ll currentSum, ll half) {
    if(currentSum == half){   
        sum = currentSum;  
        return;
    }
    if (index == n) {
        if(currentSum <= half)    sum = max (sum, currentSum);
        return;
    }
    getClosestSum(a, n, index + 1, currentSum, half);
    getClosestSum(a, n, index + 1, currentSum + a[index], half);
}

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    ll total = 0;
    for (auto &i : a){
        cin >> i;
        total += i;
    }
    ll half = total / 2;
    getClosestSum(a, n, 0, 0, half);
    cout << total - 2 * sum << "\n";
}