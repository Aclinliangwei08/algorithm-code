#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL x,y,n;
    cin>>x>>y>>n;
    x-=1;
    y-=1;
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }

    if(y>10*x)
    {
        cout<<x*n;
    }else{
        cout<<(n/10)*y+(n%10)*x;
    }
    return 0;
}