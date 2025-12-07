#include<bits/stdc++.h>
using namespace std;
int ret[14];//中间数组
int a[14][5];
int n=13,m=4;
void dfs(int x)
{
    if(x==13)
    return;
    int t=a[x][ret[x]];
    ret[x]--;
    dfs(t);
}
int main()
{
    for(int i=1;i<=n;i++)
    {
        ret[i]=4;
        for(int j=1;j<=m;j++)
        {
            char ch;
            cin>>ch;
            if(ch>='2'&&ch<='9')
            a[i][j]=ch-'0';
            else if(ch=='A')
            a[i][j]=1;
            else if(ch=='J')
            a[i][j]=11;
            else if(ch=='Q')
            a[i][j]=12;
            else if(ch=='K')
            a[i][j]=13;
            else
            a[i][j]=10;
        }
    }

    for(int i=1;i<=m;i++)
    {
        dfs(a[13][i]);
    }
    int ans=0;
    for(int i=1;i<=12;i++)
    {
        if(ret[i]==0)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}