#include<bits/stdc++.h>
using namespace std;
const int M=1e6+10,N=300;
typedef long long LL;
LL cnt[N],c[N];
LL f[M];
LL n,m;
LL sum;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>cnt[i];
    }
    f[0]=1;
    for(int j=1;j<=n;j++)
    {
        cin>>c[j];
        sum+=c[j]*cnt[j];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=sum;j>=0;j--)
        {
            for(int k=0;k<=cnt[i]&&k*c[i]<=j;k++)
            {
                f[j]=max(f[j],f[j-k*c[i]]*k);
            }
        }
    }

    for(int i=1;i<=sum;i++)
    {
        if(f[i]>=m)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
}