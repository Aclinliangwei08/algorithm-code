#include<bits/stdc++.h>
using namespace std;
int T,p,x,y;
const int N=1e4+10;
char f[N][N];
char dfs(int x,int y)
{
    if(f[x][y])
    return f[x][y];//剪枝
    f[x][y]='3';
    if(x==0)
    return f[x][y]='1';
    else if(y==0)
    return f[x][y]='2';
    else 
    return f[x][y]=dfs((x+y)%p,(x+y+y)%p);
}
int main()
{
    cin>>T>>p;
    while(T--)
    {
        cin>>x>>y;
        char res=dfs(x,y);
        if(res=='1')
        cout<<"1"<<endl;
        else if(res=='2')
        cout<<"2"<<endl;
        else
        cout<<"error"<<endl;
    }
    return 0;
}