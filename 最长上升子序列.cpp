#include<bits/stdc++.h>
using namespace std;
const int N=5010;
int a[N];
int f[N];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
        {
            if(a[i]>a[j])
            {
                f[i]=max(f[i],f[j]+1);
            }
        }
        ret=max(ret,f[i]);
    }
    cout<<ret<<endl;
    return 0;
}