#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m;
char ch[N][N];
int ans[N][N];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ch[i][j];
        }
    }

     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ch[i][j]=='*')
            {
                for(int k=0;k<8;k++)
                {
                    int x=dx[k]+i;
                    int y=dy[k]+j;
                    if(x>=1&&x<=n&&y>=1&&y<=m&&ch[x][y]!='*')
                    {
                        ans[x][y]++;
                    }
                }
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ch[i][j]=='*')
            {
                cout<<'*';
            }else{
                cout<<ans[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}