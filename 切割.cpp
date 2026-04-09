#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL gcd(LL a, LL b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    LL w, h;
    cin >> w >> h;
    
    LL g = gcd(w, h);
    
    // 找g的最小质因子
    LL s = -1;
    for(LL i = 2; i * i <= g; i++) {
        if(g % i == 0) {
            s = i;
            break;
        }
    }
    if(s == -1 && g >= 2) s = g;  // g本身是质数
    
    if(s == -1)
        cout << 0 << endl;
    else
        cout << (w/s) * (h/s) << endl;
    
    return 0;
}