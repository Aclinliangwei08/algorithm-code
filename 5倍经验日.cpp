#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1e3+10;
LL f[N];
LL n,x;
int main()
{
    cin>>n>>x;
    LL base=0;
    for(int i=1;i<=n;i++)
    {
        int lose ,win,use;
        cin>>lose>>win>>use;
        base+=lose;
        int extra=win-lose;
        for(int j=x;j>=use;j--)
        {
            f[j]=max(f[j],f[j-use]+extra);
        }
    }
    cout<<(f[x]+base)*5<<endl;
    return 0;
}