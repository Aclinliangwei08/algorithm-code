#include<bits/stdc++.h>
using namespace std;
const int N=1e9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin>>a>>b;
    if(a==1){cout<<1;return 0;}
    long long sum=1;
    while(b--)
    {
        sum*=a;
        if(sum>N)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<sum<<endl;
    return 0;
}