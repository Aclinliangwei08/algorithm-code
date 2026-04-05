#include<bits/stdc++.h>
using namespace std;
const int N=210;
long long a[N],b[N],c[N];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=m;i++)
    cin>>b[i];
    for(int i=1;i<=k;i++)
    cin>>c[i];
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int h=1;h<=k;h++)
            {
                long long tmp=(a[i]*b[j])%c[h];
                ans=max(tmp,ans);
            }   
        }
    }
    cout<<ans<<endl;
    return 0;
}