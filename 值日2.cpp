#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=a/gcd(a,b)*b;
    cout<<ans<<endl;
    return 0;
}