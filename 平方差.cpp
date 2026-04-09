#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL l,r;
int calc(int x)
{
    if(x<2)
    return 0;
    else 
    return (x+2)/4;
}
int main()
{
    cin>>l>>r;
    int a=calc(l-1);
    int b=calc(r);
    int c=b-a;
    int d=r-l+1;
    cout<<d-c<<endl;
    return 0;
}