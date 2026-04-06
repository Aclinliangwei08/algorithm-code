#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
typedef long long LL;
LL a[N];
LL n,x;

int main()
{
    cin>>n>>x;
    LL ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ans+=a[i];
    }

    LL maxCub=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=(x-a[i]);
        if(cnt>maxCub)
        maxCub=cnt;
        if(cnt<0)
        cnt=0;
    }
    cout<<ans+maxCub<<endl;
    return 0;
}