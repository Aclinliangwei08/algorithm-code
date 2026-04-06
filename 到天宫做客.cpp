#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int days[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int calc(int month,int day) {
    int ans = day;
    for(int i = 1; i < month; i++) {
        ans += days[i];
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    arr.clear(); 

    for(int i = 0; i < n; i++) {
        int month, day;
        cin >> month >> day;
        arr.push_back(calc(month, day));
    }

    sort(arr.begin(), arr.end());

       if (arr.empty()) {
        cout << 86400 << endl;
        return 0;
    }
    int maxRes = 0;

    // 1️⃣ 开头
    maxRes = max(maxRes, arr[0] - 1);

    // 2️⃣ 中间
    for(int i = 1; i < arr.size(); i++) {
        int tmp = arr[i] - arr[i-1] - 1;
        maxRes = max(maxRes, tmp);
    }

    // 3️⃣ 结尾
    maxRes = max(maxRes, 366 - arr.back());

    double ans=1.0*86400*maxRes/366;
    cout<<round(ans)<<endl;

    return 0;
}