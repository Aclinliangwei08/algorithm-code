#include<bits/stdc++.h>
using namespace std;
int n,x;
int main()
{
    cin>>n;
    long long sum=0,ret=-1e6;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
        ret=max(sum,ret);
        if(sum<0)
        sum=0;
    }
    cout<<ret<<endl;
    return 0;
}