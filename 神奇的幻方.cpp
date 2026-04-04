#include<bits/stdc++.h>
using namespace std;
const int N=45;
int a[N][N];
int x,y;
int n;
int main()
{
    cin>>n;
    a[1][(n+1)/2]=1;
    x=1;
    y=(n+1)/2;
    for(int k=2;k<=n*n;k++)
    {
        if(x==1&&y!=n)
        {
            a[n][y+1]=k;
            x=n;
            y=y+1;
        }else if(x!=1&&y==n)
        {
            a[x-1][1]=k;
            x=x-1;
            y=1;
        }else if(x==1&&y==n)
        {
            a[x+1][y]=k;
            x=x+1;
        }else if(x!=1&&y!=n)
        {
            if(a[x-1][y+1]==0)
           {
             a[x-1][y+1]=k;
             x=x-1;
             y=y+1;
           }
            else 
           {
             a[x+1][y]=k;
             x=x+1;
           }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}