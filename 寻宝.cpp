#include<bits/stdc++.h>
using namespace std;
const int N=10010,M=110,MOD=20123;
typedef long long LL;
bool st[N][M];// 标记楼梯信息
LL arr[N][M];// 指示牌上的数字
LL n,m;
LL cnt[N];//统计每层楼上的楼梯数量
int main()
{
    cin>>n>>m;
    LL x,y;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x>>y;
            if(x)
            {
                st[i][j]=true;
                cnt[i]++;
            }
            arr[i][j]=y;
        }
    }
    LL ret=0;
    LL pos;
    cin>>pos;
    for(int i=1;i<=n;i++)
    {
        ret=(ret+arr[i][pos])%MOD;
        LL step=arr[i][pos]%cnt[i];
        if(!step)
        step=cnt[i];
        while(1)
        {
            if(st[i][pos])
            step--;
            if(step==0)
            break;
            pos++;
            if(pos==m)
            pos=0;
        }
    }
    cout<<ret<<endl;
    return 0;
}