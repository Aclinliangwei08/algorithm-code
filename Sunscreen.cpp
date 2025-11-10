#include<bits/stdc++.h>
using namespace std;
int c,l;
const int N=2510;
struct node{
    int l;//左区间  / 阳光强度
    int r;//右区间  / 数量
}a[N],b[N];
bool cmp(node &x,node &y)
{
    return x.l>y.l;
}
int main()
{
    cin>>c>>l;
    for(int i=1;i<=c;i++)
    {
        cin>>a[i].l>>a[i].r;
    }
    for(int j=1;j<=l;j++)
    {
        cin>>b[j].l>>b[j].r;
    }
    sort(a+1,a+1+c,cmp);
    sort(b+1,b+1+l,cmp);
    int ret=0;
    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=l;j++)
        {
            int w=b[j].l,cnt=b[j].r;
            if(cnt==0)
            continue;
            if(w<a[i].l)
            break;
            if(w>a[i].r)
            continue;
            ret++;
            b[j].r--;
            break;
        }
    }
    cout<<ret<<endl;
    return 0;
}