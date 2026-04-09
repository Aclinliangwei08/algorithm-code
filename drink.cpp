#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int begin=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            begin=i;
            break;
        }
    }
    int end=0;
    for(int i=n;i>=1;i--)
    {
        if(a[i]==1)
        {
            end=i;
            break;
        }
    }
    if(begin!=0&&end!=0)
    {
        cout<<end-begin+1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}