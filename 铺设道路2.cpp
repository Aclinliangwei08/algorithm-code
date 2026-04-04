#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    long long ans=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i-1]<a[i])
        {
            ans+=(a[i]-a[i-1]);
        }
    }
    cout<<ans<<endl;
    return 0;
}