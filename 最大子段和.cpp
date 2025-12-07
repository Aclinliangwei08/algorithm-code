#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int n;
int dfs(int left,int right)
{
    if(left==right)
    return a[left];
    int mid=(left+right)/2;
    int ret=max(dfs(left,mid),dfs(mid+1,right));
    // 一左一右
    int sum=a[mid],lmax=a[mid];
    for(int i=mid-1;i>=left;i--)
    {
        sum+=a[i];
        lmax=max(lmax,sum);
    }
    sum=a[mid+1];
    int rmax=a[mid+1];
    for(int j=mid+2;j<=right;j++)
    {   
        sum+=a[j];
        rmax=max(rmax,sum);
    }
    ret=max(lmax+rmax,ret);
    return ret;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<dfs(1,n);
    return 0;
}