#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long f[N];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>f[i];
    long long ans=LLONG_MIN;
    long long mini=f[1];
    for(int r=2;r<=n;r++)
    {
        ans=max(f[r]-mini,ans);
        mini=min(mini,f[r]);
    }
    cout<<ans<<endl;
    return 0;
}