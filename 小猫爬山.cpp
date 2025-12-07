#include<bits/stdc++.h>
using namespace std;
const int N=20;
int n,w;
int c[N];
int sum[N];//每辆车上的总重量
int ret=N;//最优解
int cnt;//当前总车辆

bool cmp(int x,int y)
{
    return x>y;
}

void dfs(int pos)
{
    if(cnt>=ret)
    {
        return;
    }
    if(pos>n)
    {
        ret=cnt;
        return;
    }
    for(int i=1;i<=cnt;i++)
    {
        if(sum[i]+c[pos]>w)
        continue;
        sum[i]+=c[pos];
        dfs(pos+1);
        sum[i]-=c[pos];
    }
    //新增车辆
    cnt++;
    sum[cnt]=c[pos];
    dfs(pos+1);
    sum[cnt]=c[pos];
    cnt--;
}
int main()
{
    cin>>n>>w;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    sort(c+1,c+1+n,cmp);
    dfs(1);
    cout<<ret<<endl;
    return 0;
}