#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int T;
    cin>>T; 
    LL t;
    while(T--)
    {
        LL ans =0;
        cin>>t;
        int mi=11;
        while(t)
        {
            int tmp = t%10;
            mi=min(mi,tmp);
            t/=10;
            ans+=tmp;
        }
         ans=ans+9-mi;
         cout<<ans<<endl;
    }
   
    return 0;
}