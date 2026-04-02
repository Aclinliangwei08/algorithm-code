#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int f[N][N];
int t[N],w[N];
int T,M;
int main()
{
    cin>>T>>M;
    for(int i=1;i<=M;i++)
    {
        cin>>t[i]>>w[i];
    }
    for(int i=1;i<=M;i++)
    {
        for(int j=0;j<=T;j++)
        {
            f[i][j]=f[i-1][j];
            if(t[i]<=j)
            {
                f[i][j]=max(f[i][j],f[i-1][j-t[i]]+w[i]);
            }
        }
    }
    cout<<f[M][T];
    return 0;
}