#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    LL a,b,c;
    cin>>a>>b>>c;
    LL week =5*a+2*b;
    LL full =c/week;
    LL done = full *week;
    LL ans=full*7;
    if(done>=c)
    {
        cout<<ans<<endl;
        return 0;
    }
    for(int i=1;i<=7;i++)
    {
        if(i<=5)
        {
            done+=a;
        }else{
            done+=b;
        }
        ans++;
        if(done>=c)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}