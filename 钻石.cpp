#include<bits/stdc++.h>
using namespace std;
int n,k;
const int N=5e4+10;
int f[N],g[N],a[N];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+1+n);
    int left=1,right=1;
    for(;right<=n;right++)
    {
        while(a[right]-a[left]>k)
        left++;
        f[right]=max(f[right-1],right-left+1);
    }
    left=n,right=n;
     for(;left>=1;left--)
    {
        while(a[right]-a[left]>k)
        right--;
        g[left]=max(g[left+1],right-left+1);
    }
    int ret=0;
    for(int i=2;i<=n;i++)
    {
        ret=max(ret,f[i-1]+g[i]);
    }
    cout<<ret<<endl;
    return 0;
}