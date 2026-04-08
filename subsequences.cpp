#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=50010;
LL n;
LL f[N]; // 前缀和数组
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
        f[i]+=f[i-1];
    }
    int ans=0;
    unordered_map<int,int> mp;
    mp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int r=f[i]%7;
        if(mp.count(r))
        {
            ans=max(ans,i-mp[r]);
        }else{
            mp[r]=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}