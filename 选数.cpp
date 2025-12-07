#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int a[25];

bool isPrime(long long x){
    if(x < 2) return false;
    if(x % 2 == 0) return x == 2;
    for(long long i = 3; i * i <= x; i += 2)
        if(x % i == 0) return false;
    return true;
}

void dfs(int idx, int cnt, long long sum){
    if(cnt == k){
        if(isPrime(sum)) ans++;
        return;
    }
    if(idx == n) return;

    // 选当前
    dfs(idx + 1, cnt + 1, sum + a[idx]);

    // 不选当前
    dfs(idx + 1, cnt, sum);
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    dfs(0, 0, 0);
    cout << ans;
}