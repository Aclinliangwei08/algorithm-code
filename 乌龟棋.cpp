#include<bits/stdc++.h>
using namespace std;
const int N=360,M=50;
int f[M][M][M][M],cnt[5];
int x[N];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(int i=1;i<=m;i++)
    {
        int t;
        cin>>t;
        cnt[t]++;
    }
    f[0][0][0][0]=x[1];
    for(int a=0;a<=cnt[1];a++)
    {
        for(int b=0;b<=cnt[2];b++)
        {
            for(int c=0;c<=cnt[3];c++)
            {
                for(int d=0;d<=cnt[4];d++)
                {
                    int i=1+a+b*2+c*3+d*4;
                    int& t=f[a][b][c][d];
                    if(a) t=max(t,f[a-1][b][c][d]+x[i]);
                    if(b) t=max(t,f[a][b-1][c][d]+x[i]);
                    if(c) t=max(t,f[a][b][c-1][d]+x[i]);
                    if(d) t=max(t,f[a][b][c][d-1]+x[i]);

                }                                                                                                                                                                                                                                                                                                       
            }
        }
    }
    cout<<f[cnt[1]][cnt[2]][cnt[3]][cnt[4]]<<endl;
    return 0;
}