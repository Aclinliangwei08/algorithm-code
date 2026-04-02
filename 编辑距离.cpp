#include<bits/stdc++.h>
using namespace std;
string a,b;
const int N=2010;
int f[N][N];
int main()
{
    cin>>a>>b;
    int n=a.size(),m=b.size();
    a=" "+a;
    b=" "+b;
    //初始化
    for(int i=1;i<=n;i++)
    f[i][0]=i;
    for(int j=1;j<=m;j++)
    f[0][j]=j;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i]==b[j])
            {
                f[i][j]=f[i-1][j-1];
            }else{
                f[i][j]=min(min(f[i-1][j],f[i-1][j-1]),f[i][j-1])+1;
            }
        }
    }
    cout<<f[n][m]<<endl;
}