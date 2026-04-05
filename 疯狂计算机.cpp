#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int ans=0;
    int af=0;
    int be=0;
    while(n--)
    {
        cin>>af;
        if((af-be)>c)
        {
            ans=0;
        }
        ans++;
        be=af;
    }
    cout<<ans<<endl;
    return 0;
}