#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    LL n;
    cin>>n;
    LL ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=n/i;
    }
    cout<<ans<<endl;
    return 0;
}