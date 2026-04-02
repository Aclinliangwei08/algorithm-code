#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1e4+10,M=1e7+10;
int t[N],w[N];
int n,m;
LL f[M];
int main()
{   
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    cin>>t[i]>>w[i];
    for(int i=1;i<=m;i++)
    {
        for(int j=t[i];j<=n;j++)
        {
            f[j]=max(f[j],f[j-t[i]]+w[i]);
        }
    }
    cout<<f[n]<<endl;
    return 0;
}