#include<bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int fa[N*3];//扩展域并查集
int n,k;
int find(int x)
{
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
void un(int x,int y)
{
    fa[find(x)]=find(y);
}
int main()
{
    cin>>n>>k;
    int ret=0;
    //初始化
    for(int i=1;i<=3*n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=k;i++)
    {
        int op,x,y;
        cin>>op>>x>>y;
        if(x>n||y>n)
        ret++;
        else if(op==1)//同类
        {
            //x->y  y->x
            if(find(x)==find(y+n+n)||find(y+n)==find(x))
            {
                ret++;
            }else{
                un(x,y);
                un(x+n,y+n);
                un(x+n+n,y+n+n);
            }
        }else//x->y
        {
            //y->x  同类
            if(find(x)==find(y)||find(y+n+n)==find(x))
            {
                ret++;
            }else{
                un(y,x+n+n);
                un(y+n,x);
                un(y+n+n,x+n);
            }
        }
    }   
    cout<<ret<<endl;
    return 0;
}