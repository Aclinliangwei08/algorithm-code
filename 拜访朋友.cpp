#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int n,x0;
typedef long long LL;
LL calc(int k,int b,int c)
{
    if(k<=b)
    {
        return c-k;
    }
    if(k>=c)
    {
        return k-b;
    }
    return (c-b)+min(k-b,c-k);
}
int main()
{
    cin>>n>>x0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(n==1)
    {
        cout << 0 << endl;
        return 0;
    }
    LL ans1=calc(x0,a[0],a[n-2]);
    LL ans2=calc(x0,a[1],a[n-1]);
    LL ans=min(ans1,ans2);
    cout<<ans<<endl;
    return 0;
}