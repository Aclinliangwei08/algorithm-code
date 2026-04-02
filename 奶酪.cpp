#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
typedef long long LL;
int fa[N];
LL n,h,r;
LL fx[N],fy[N],fz[N];
bool check(int i,int j)
{
    LL tmp=(fx[i]-fx[j])*(fx[i]-fx[j])+(fy[i]-fy[j])*(fy[i]-fy[j])
    +(fz[i]-fz[j])*(fz[i]-fz[j]);
    return tmp <=4*r*r;
}

int found(int x)
{
    return x==fa[x]?x:fa[x]=found(fa[x]);
}
void merge(int i,int j)
{
    fa[found(i)]=found(j);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>h>>r;
        for(int i=0;i<=n+1;i++)
        fa[i]=i;
        for(int i=1;i<=n;i++)
        {
            cin>>fx[i]>>fy[i]>>fz[i];
            //判断上表面
            if(fz[i]+r>=h)
            merge(i,n+1);
            //判断下表面
            if(fz[i]<=r)
            merge(i,0);
            //判断其他球
            for(int j=1;j<i;j++)
            {
                if(check(i,j))
                {
                    merge(i,j);
                }
            }
        }
        if(found(0)==found(n+1))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}