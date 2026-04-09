#include<bits/stdc++.h>
using namespace std;
const int N=25;
int f[N][N];
bool st[N][N];
int main()
{
    int n;
    cin>>n;
    int x=1,y=(n+1)/2;
    f[x][y]=1;
    st[x][y]=true;
    for(int i=2;i<=n*n;i++)
    {
        int tmpx=x-1;
        if(tmpx==0)
        tmpx=n;
        int tmpy=y+1;
        if(tmpy==(n+1))
        tmpy=1;
        if(!st[tmpx][tmpy])
        {
            f[tmpx][tmpy]=i;
            st[tmpx][tmpy]=true;
            x=tmpx;
            y=tmpy;
        }else{
            int tmpa=x+1;
            if(tmpa==n+1)
            tmpa=1;
            f[tmpa][y]=i;
            st[tmpa][y]=true;
            x=tmpa;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}