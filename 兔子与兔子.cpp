#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10,P=13331;
string s;
typedef unsigned long long ULL;
ULL f[N];//字符串哈希数组
ULL p[N];//P的i次方
int n,m;
void init_hash()
{
    p[0]=1;
    for(int i=1;i<=n;i++)
    {
        f[i]=f[i-1]*P+s[i];
        p[i]=p[i-1]*P;
    }
}
ULL get_hash(ULL l,ULL r)
{
    return f[r]-f[l-1]*p[r-l+1];
}
int main()
{
    cin>>s;
    n=s.size();
    s=" "+s;
    cin>>m;
    init_hash();
    while(m--)
    {
        ULL l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(get_hash(l1,r1)==get_hash(l2,r2))
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}