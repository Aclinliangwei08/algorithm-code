#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=5e4+10;
struct ndd{
    int w;
    int s;
}a[N];
bool cmp(ndd &x,ndd &y){
    return x.w+x.s<y.w+y.s;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].w>>a[i].s;
    }
    sort(a+1,a+n+1,cmp);
    LL w=0,ans=-1e9-10;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,w-a[i].s);
        w+=a[i].w;
    }
    cout<<ans<<endl;
    return 0;
}