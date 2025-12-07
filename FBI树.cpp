#include<bits/stdc++.h>
using namespace std;
int f[1<<11];//前缀和数组
int n;
void dfs(int left,int right)
{
    if(left>right)
    return;
    char ret;
    int mid=(left+right)/2;
    int sum=f[right]-f[left-1];
    if(sum==0)
    ret='B';
    else if(sum==(right-left+1))
    ret = 'I';
    else 
    ret='F';
    if(left==right)
    {
        cout<<ret;
        return;
    }
    dfs(left,mid);
    dfs(mid+1,right);
    cout<<ret;
}
int main()
{
    cin>>n;
    n=(1<<n);
    for(int i=1;i<=n;i++)
    {
        char ch;
        cin>>ch;
        int t=0;
        if(ch=='1') t=1;
        f[i]=f[i-1]+t;
    }
    dfs(1,n);
    return 0;
}