#include<bits/stdc++.h>
using namespace std;
const int N=1010;
char g[N][N];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>g[i][j];
        }
    }
    string t="hehe";
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int s=0;s<4;s++)
            {
                bool ok=true;
                for(int k=0;k<4;k++)
                {
                    int x=i+k*dx[s];
                    int y=j+k*dy[s];
                    if(x<0 || x>=n || y<0 || y>=m || g[x][y]!=t[k])
                    {
                        ok=false;
                        break;
                    }
                }
                if(ok)
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}