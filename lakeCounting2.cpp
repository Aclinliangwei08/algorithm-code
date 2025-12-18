#include<bits/stdc++.h>
using namespace std;
const int N=110;
char a[N][N];
int fa[N*N];
int n,m;
int dx[]={0,1,1,1};
int dy[]={1,-1,0,1};
int find(int x)
{
    if(x==fa[x])
    return x;
    else
    return fa[x]=find(fa[x]);
}
void un(int x,int y)
{
    fa[find(x)]=find(y);
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n*m;i++)
    fa[i]=i;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)   
        {
            if(a[i][j]=='.')
            continue;
            for(int k=0;k<4;k++)
            {
                int x=dx[k]+i;
                int y=dy[k]+j;
                if(y>=0&&a[x][y]=='W')
                {
                    un(i*m+j,x*m+y);
                }
            }
        }
    }
    int ret=0;
    for(int i=0;i<n*m;i++)
    {
        int x=i/m,y=i%m;
        if(a[x][y]=='W'&&fa[i]==i)
        ret++;
    }
    cout<<ret<<endl;
    return 0;
}