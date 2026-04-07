#include<bits/stdc++.h>
using namespace std;
const int N=110,M=1e5+10;
typedef long long LL;
LL f[M];
LL v[N],w[N],m[N];
int n,W;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>W;

    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i]>>m[i];

    }
    for(int i=1;i<=n;i++)
    {
       LL rem=m[i];
       for(LL j=1;j<=rem;j*=2)
       {
            LL wi=j*w[i],vi=j*v[i];
            for(int k=W;k>=wi;k--)
            {
                f[k]=max(f[k],f[k-wi]+vi);
            }
            rem-=j;
       }
       if(rem>0)
       {
            LL wi=rem*w[i],vi=rem*v[i];
            for(int k=W;k>=wi;k--)
            {
                f[k]=max(f[k],f[k-wi]+vi);
            }   
       }
    }
    cout<<f[W]<<endl;
    return 0;
}