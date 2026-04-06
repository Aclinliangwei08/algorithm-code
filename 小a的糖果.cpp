#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    int n,x;
    cin>>n>>x;
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]+a[i-1]>x)
        {
            int tmp=a[i]+a[i-1]-x;
            ans+=tmp;
            a[i]-=tmp;
        }
    }
    cout<<ans<<endl;
    return 0;
}