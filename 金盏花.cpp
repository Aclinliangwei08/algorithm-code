#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{   
    LL x,z;
    cin>>x>>z;
    LL ans=1e12+10;
    for(LL i=100000;i<1000000;i++)
    {
        LL tmp = i*1000000+x;
        ans=min(ans,abs(tmp-z));
    }
    cout<<ans<<endl;
    return 0;
}