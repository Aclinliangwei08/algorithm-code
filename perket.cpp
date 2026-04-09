#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=20;
LL n;
LL a[N],b[N];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    LL ret=1e18;
    for(int i=1;i<(1<<n);i++)
    {
        LL x=1,y=0;
        for(int j=0;j<n;j++)
        {
            if((i>>j)&1)
            {
                x*=a[j];
                y+=b[j];
            }
        }
        ret=min(ret,abs(x-y));
    }
    cout<<ret<<endl;
    return 0;
}