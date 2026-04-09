#include<bits/stdc++.h>
using namespace std;
const int N=110,M=25010;
bool f[M];
int a[N];
int n;
void solve()
{
    memset(f,0,sizeof f);
    f[0]=true;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        if(!f[a[i]])
        ret++;
        for(int j=a[i];j<=a[n];j++)
        {
            f[j]=f[j]||f[j-a[i]];
        }
    }
    cout<<ret<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}