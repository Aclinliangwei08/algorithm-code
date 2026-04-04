#include<bits/stdc++.h>
using namespace std;
const int N=110;
int f[N];
int n,m;
int main()
{   
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        f[l]++;
        f[r+1]--;
    }
    for(int i=1;i<=n;i++)
    {
        f[i]=f[i]+f[i-1];
        if(f[i]==0||f[i]>1)
        {
            cout<<i<<" "<<f[i]<<endl;
            return 0;
        }
    }
    cout<<"OK"<<endl;
    return 0;
}