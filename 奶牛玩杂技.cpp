#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 10;
struct Cow {
    long long w, s;
} a[N];

bool cmp(Cow x, Cow y) {
    return x.w + x.s < y.w + y.s; 
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i].w >> a[i].s;
    sort(a, a + n, cmp);

    long long ans = LLONG_MIN, weight = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, weight - a[i].s);
        weight += a[i].w;
    }
    cout << ans << endl;
    return 0;
}