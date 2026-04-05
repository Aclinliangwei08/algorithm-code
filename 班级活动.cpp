#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
typedef long long ll;

int a[N], cnt[N];
int n;
int sum1 , sum2 ;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i = 1; i <= 1e6; i++) {
		if (cnt[i] >= 2) {
			sum1 += (cnt[i] - 2);
		} else {
			sum2 += cnt[i];
		}
	}
	if (sum1 > sum2) {
		cout << sum1 << "\n";
	} else {
		cout << sum1 + (sum2 - sum1) / 2 << "\n";
	}
    return 0;
}
