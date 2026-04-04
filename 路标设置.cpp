#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int f[N];
int len,n,k;
bool check(int x)
{
    int ret=0;
    for(int i=2;i<=n;i++)
    {
        int d=f[i]-f[i-1];
        ret+=d/x;
        if(d%x==0)
        ret--;
    }
    return ret<=k;
}

int main()
{
    cin>>len>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>f[i];
    int l=1,r=len;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        r=mid;
        else
        l=mid+1;
    }
    cout<<l<<endl;
    return 0;
}