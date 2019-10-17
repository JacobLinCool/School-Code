#include<bits/stdc++.h>
#define int long long
using namespace std;

struct node {
    string a;
    int b;
    double c;
};


bool cmp(node a, node b) {
    if(a.c > b.c) return true;
    else if(a.c < b.c) return false;
    if(a.a < b.a) return true;
    if(a.b < b.b) return true;
    return false;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin >> n) {
        vector<node> v;
        for(int i = 0; i < n; i++) {
            string a;
            int b;
            double c;
            cin >> a >> b >> c;
            v.push_back({a, b, c});
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++) {
            cout << v[i].a << " " << v[i].b << " " << v[i].c << "\n";
        }
    }
}
