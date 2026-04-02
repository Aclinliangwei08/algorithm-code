#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
typedef long long LL;
LL a,b,n;
LL w[N];

bool check(int x)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(w[i]<=x*a)
        continue;
        int d = w[i]-x*a;
        cnt+=d/b+(d%b==0?0:1);
    }
    return cnt<=x;
}

int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    int l=1,r=5e5;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<l;
    return 0;
}