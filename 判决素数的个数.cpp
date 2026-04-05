#include<bits/stdc++.h>
using namespace std;
bool check(int x)
{
    if(x==1)
    return false;
    int z=sqrt(x);
    for(int i=2;i<=z;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int ans=0;
    if(x>y)
    swap(x,y);
    for(int i=x;i<=y;i++)
    {
        if(check(i))
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}