#include<bits/stdc++.h>
using namespace std;
int n;
const int N=35;
bool st[N][N];//标记数组，如果遍历外层过程中遇到0标记为true
int arr[N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void dfs(int i,int j)
{
    st[i][j]=true;
    for(int k=0;k<4;k++)
    {
        int x=dx[k]+i;
        int y=dy[k]+j;
        if(x>=0&&x<=n+1&&y>=0&&y<=n+1&&st[x][y]==false&&arr[x][y]==0)
        {
            dfs(x,y);
        }
    }
}
int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }
        dfs(0,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[i][j])
                cout<<1<<" ";
                else if(st[i][j])
                cout<<0<<" ";
                else
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}