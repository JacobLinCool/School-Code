#include<bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int x;
    while(cin >> x) {
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}
