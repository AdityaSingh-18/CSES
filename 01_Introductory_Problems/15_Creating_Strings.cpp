// Problem Link https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

set<string> p;
int c = 0;

void getPermutation(string &s, int l, int r) {
    if (l == r) {
        if(p.find(s) == p.end()){
            p.insert(s);
            c++;
        }
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]); 
        getPermutation(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main(){
    string s;
    cin >> s;
    getPermutation(s, 0, s.size() - 1);
    cout << c << "\n";
    for (auto &s : p)   cout << s << "\n";
}