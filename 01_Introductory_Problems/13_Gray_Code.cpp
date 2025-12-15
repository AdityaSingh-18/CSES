// Problem Link https://cses.fi/problemset/task/2205

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> builtGrayCode(int n){
    if(n == 1){
        return {"0", "1"};
    }
    vector<string> small = builtGrayCode(n - 1);
    vector<string> gray;
    for (auto &s : small)   gray.push_back("0" + s);
    for (int i = small.size() - 1; i >= 0; i--)     gray.push_back("1" + small[i]);
    return gray;
}

int main(){
    int n;
    cin >> n;
    vector<string> gray = builtGrayCode(n);
    for (auto &s : gray)    cout << s << "\n";
}