#include<bits/stdc++.h>
using namespace std;
const int N=210;
int a[N];
int f[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i+n]=a[i];  //倍增
    }
    for(int len=3;len<=n+1;len++)
    {
        for(int i=1;i+len-1<=2*n;i++)
        {
            int j=i+len-1;
            for(int k=i+1;k<j;k++)
            {
                f[i][j]=max(f[i][j],f[i][k]+f[k][j]+a[i]*a[k]*a[j]);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,f[i][i+n]);
    }
    cout<<ans<<endl;
    return 0;
}