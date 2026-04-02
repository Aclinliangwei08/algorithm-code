#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int n;
typedef long long LL;
LL f[N];
int main()
{
    f[0]=1;
    cin>>n;
    LL sum=(1+n)*n/2;

    if(sum&1){
        cout<<0<<endl;
        return 0;
    }

    sum/=2;
    for(LL i=1;i<=n;i++)
    {
        for(LL j=sum;j>=i;j--)
        {
            f[j]=f[j-i]+f[j];
        }
    }
    cout<<f[sum]/2<<endl;
    return 0;
}