#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m,v;
int main()
{
    cin>>n>>m>>v;
    if(m<n-1 ||m>(n-1)*(n-2)/2+1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=v)
        {
            cout<<i<<" "<<v<<endl;
            m--;
        }
    }
    int w=1;
    if(w==v)
    w=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(!m)
            return 0;
            if(i==w || i==v || j==w || j==v)
            continue;
            cout<<i<<" "<<j<<endl;
            m--;
        }
    }
    return 0;
}