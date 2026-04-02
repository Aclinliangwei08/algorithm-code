#include<bits/stdc++.h>
using namespace std;
string s,t;
const int N=5010;
int f[N][N];
int main()
{
    while(cin>>s>>t)
    {
        int n=s.size(),m=t.size();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    f[i][j]=f[i-1][j-1]+1;
                }else{
                    f[i][j]=max(f[i-1][j],f[i][j-1]);
                }
            }
        }
        cout<<f[n][m]<<endl;
    }
    return 0;
}