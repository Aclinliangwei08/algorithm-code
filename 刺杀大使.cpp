#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1010;
int arr[N][N];
//在伤害值的最大值不超过mid的情况下能顺利到大目的地
typedef pair<int,int> PII;
bool dist[N][N];//剪枝
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool bfs(int mid)
{
    if(n==1)
    return true;
    memset(dist,0,sizeof dist);
    queue<PII> q;
    for(int i=1;i<=m;i++)
    {
        q.push({1,i});
        dist[1][i]=true;
    }
    while(q.size())
    {
        auto t=q.front();
        int x=t.first;
        int y=t.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int a=dx[i]+x;
            int b=dy[i]+y;
            if(a>=1&&a<=n&&b>=1&&b<=m&&dist[a][b]==false&&arr[a][b]<=mid)
            {
                dist[a][b]=true;
                q.push({a,b});
                if(a==n)
                return true;
            }
        }
    }
    return false;
}
int main()
{
    cin>>n>>m;
    int l=0,r=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            r=max(r,arr[i][j]);
        }
    }

    while(l<r)
    {
        int mid=(l+r)/2;
        if(bfs(mid)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
    return 0;
}