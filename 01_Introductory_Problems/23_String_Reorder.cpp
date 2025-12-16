// Problem Link https://cses.fi/problemset/task/1743

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkPlacement(int n, vector<int> freq){
    int max_rem = *max_element(freq.begin(), freq.end());
    return ((n + 1) / 2 >= max_rem ? true : false);
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26, 0);
    for (auto &c : s)   freq[c - 'A']++;
    if(!checkPlacement(n, freq)){
        cout << -1 << endl;
        return;
    }
    char prev = '#';
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 26; j++){
            if(freq[j] > 0 && ('A' + j) != prev){
                freq[j]--;
                if(checkPlacement(n - i, freq)){
                    cout << (char)('A' + j);
                    prev = 'A' + j;
                    break;
                }
                freq[j]++;
            }
        }
    }
    cout << "\n";
}

int main(){
    solve();
}