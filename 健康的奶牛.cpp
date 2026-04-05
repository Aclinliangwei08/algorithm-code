#include<bits/stdc++.h>
using namespace std;
const int N=30;
int cnt;//记录当前选择的饲料数量
int path;//记录当前饲料的选择情况
int ret=N;//最低选择的饲料数量
int st;//选择最低数量下，饲料的选择情况
int v[N],g[N][N];
int n,m;
bool check()
{
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=m;j++)
        {
            if((path>>j)&1)
            {
                sum+=g[j][i];
            }
        }
        if(sum<v[i])
        return false;
    }
    return true;
}

void dfs(int pos)
{
    if(cnt>=ret)
    return ;
    if(check())
    {
        st=path;
        ret=cnt;
        return;
    }
    if(pos>m)
    return;

    //选
    cnt++;
    path |=(1<<pos);
    dfs(pos+1);
    cnt--;
    path &=~(1<<pos);

    //不选
    dfs(pos+1);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>g[i][j];
        }
    }
    dfs(1);
    cout<<ret<<" ";
    for(int i=1;i<=m;i++)
    {
        if((st>>i)&1)
        cout<<i<<" ";
    }
}