#include<bits/stdc++.h>
using namespace std;
int n;
const int N=110;
int a[N];
int f[N];
int g[N];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    //从左往右
    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
        {
            if(a[j]<a[i])
            {
                f[i]=max(f[i], f[j] + 1);
            }
        }
    }
    //从右往左
    for(int i=n;i>=1;i--)
    {
        g[i]=1;
        for(int j=n;j>i;j--)
        {
            if(a[j]<a[i])
            {
                g[i]=max(g[i],g[j]+1);
            }
        }
    }
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        ret=max(ret,f[i]+g[i]-1);
    }
    cout<<n-ret<<endl;
    return 0;
}