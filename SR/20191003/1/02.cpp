#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
using namespace std;

double p(double x) {
    if(x < 0) return -x;
    else return x;
}

double area(pair<double, double> a, pair<double, double> b, pair<double, double> c) {
    double A;

    A = p( a.x*b.y + b.x*c.y + c.x*a.y - a.y*b.x - b.y*c.x - c.y*a.x ) / 2;

    return A;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    pair<double, double> items[n];
    for(int i = 0; i < n; i++) {
        int tmp[2];
        cin >> tmp[0] >> tmp[1];
        items[i] = make_pair(tmp[0], tmp[1]);
    }
    int tmp[6];
    while(cin >> tmp[0] >> tmp[1] >> tmp[2] >> tmp[3] >> tmp[4] >> tmp[5]) {
        pair<double, double> dot[3];
        dot[0] = make_pair(tmp[0], tmp[1]);
        dot[1] = make_pair(tmp[2], tmp[3]);
        dot[2] = make_pair(tmp[4], tmp[5]);
        int cnt = 0;
        double AREA = area(dot[0], dot[1], dot[2]);
        for(int i = 0; i < n; i++) {
            double x = (area(dot[0], dot[1], items[i]) + area(dot[1], dot[2], items[i]) + area(dot[0], dot[2], items[i]));
            if(AREA == x) cnt++;
        }
        cout << cnt << "\n";
    }

}
