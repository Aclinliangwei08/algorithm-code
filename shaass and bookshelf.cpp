#include<bits/stdc++.h>
using namespace std;
const int N=110,M=10010;
int t[N],w[N];
int f[M];
int n;
int main()
{
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i]>>w[i];
        sum+=t[i];
    }
    memset(f,0x3f,sizeof f);
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=sum;j>=t[i];j--)
        {
            f[j]=min(f[j],f[j-t[i]]+w[i]);
        }
    }
    for(int j=sum;j>=0;j--)
    {
        if(f[j]<=sum-j)
        {
            cout<<sum-j;
            break;
        }
    }
    return 0;
}