#include<bits/stdc++.h>
using namespace std;
const int N=1010;
struct ndd {
    int index;
    int cnt;
} row[N],col[N];
int m,n,k,l,d;
// 按cnt从大到小排
bool cmp1(ndd& x,ndd& y)
{
    return x.cnt>y.cnt;
}
// 按index从小到大排
bool cmp2(ndd& x,ndd& y)
{
    return x.index<y.index;
}
int main()
{
    cin>>m>>n>>k>>l>>d;
    int x,y,p,q;
    // 初始化
    for(int i=1;i<=m;i++)
    {
        row[i].index=i;
    }
    for(int j=1;j<=n;j++){
        col[j].index=j;
    }
    for(int i=1;i<=d;i++)
    {
        cin>>x>>y>>p>>q;

        if(x==p)
        {
            col[min(y,q)].cnt++;
        }else
        {
            row[min(x,p)].cnt++;
        }
    }

    sort(row+1,row+1+n,cmp1);
    sort(col+1,col+1+n,cmp1);

    sort(row+1,row+1+k,cmp2);
    sort(col+1,col+1+l,cmp2);

    for(int i=1;i<=k;i++)
    {
        if(i!=1)
        cout<<" ";
        cout<<row[i].index;
    }
    cout<<endl;
     for(int i=1;i<=l;i++)
    {
        if(i!=1)
        cout<<" ";
        cout<<col[i].index;
    }
    return 0;
}