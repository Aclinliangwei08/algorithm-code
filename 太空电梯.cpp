#include<bits/stdc++.h>
using namespace std;
const int N=410,M=4e4+10;
int f[M];
struct node{
    int h,a,c;
}e[N];
int n;
bool cmp(node& x,node& y)
{
    return x.a<y.a;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>e[i].h>>e[i].a>>e[i].c;
    }
    sort(e+1,e+1+n,cmp);
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        int h=e[i].h,a=e[i].a,c=e[i].c;
        for(int j=a;j>=0;j--)
        {
            for(int k=0;k<=c&&k*h<=j;k++)
            {
                f[j]=max(f[j],f[j-k*h]+k*h);
            }
            ret=max(ret,f[j]);
        }
    }
    cout<<ret<<endl;
    return 0;
}