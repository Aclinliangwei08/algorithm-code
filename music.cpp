#include<bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int f[N];
int main()
{
    int n,q;
    cin>>n>>q;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        f[i]=f[i-1]+x;
    }
    while(q--)
    {
        cin>>x;
        int l=1,r=n;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(f[mid]>x)
            {
                r=mid;
            }else{
                l=mid+1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}