#include<bits/stdc++.h>
using namespace std;
const int N=110;
int f[N];
int main()
{
    int n;
    cin>>n;
    int ret=0;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
        sum+=f[i];
    }
    sum/=n;
    for(int i=1;i<=n;i++)
    {
        if(sum==f[i])
        continue;
        ret++;
        f[i+1]+=(f[i]-sum);
    }
    cout<<ret<<endl;
    return 0;
}