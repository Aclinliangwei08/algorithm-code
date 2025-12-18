#include<bits/stdc++.h>
using namespace std;
const int N=10010,P=131;
int n;
typedef unsigned long long ULL;
ULL a[N];
ULL get_hash(string s)
{
    ULL ret=0;
    for(int i=1;i<=s.size();i++)
    {
        ret=ret*P+s[i-1];
    }
    return ret;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        ULL x=get_hash(s);
        a[i]=x;
    }
    int ret=1;
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1])
        ret++;
    }
    cout<<ret<<endl;
    return 0;
}