#include<bits/stdc++.h>
using namespace std;
const int N=50;
int f[N][N];//f[i][j]表示传球i次，落到j的方案数
int n,m;
int main()
{
    cin>>n>>m;
    f[0][1]=1;
    for(int i=1;i<=m;i++)
    {
        //第一个人  
        f[i][1]=f[i-1][n]+f[i-1][2];

        //第二到第n-1个人
        for(int j=2;j<=n-1;j++)
        {
            f[i][j]=f[i-1][j-1]+f[i-1][j+1];
        }
        //第n个人
        f[i][n]=f[i-1][1]+f[i-1][n-1];
    }
    cout<<f[m][1]<<endl;
    return 0;
}