#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int n;
    cin>>n;
    LL a=1,b=1,c=2;
    for(int i=3;i<=n;i++)
    {
        LL t=a+b+c;
        a=b;
        b=c;
        c=t;
    }
    if(n==1)
    cout<<a<<endl;
    else
    cout<<c<<endl;
    return 0;
}