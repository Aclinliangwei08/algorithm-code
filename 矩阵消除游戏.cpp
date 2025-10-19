#include<bits/stdc++.h>
using namespace std;
const int N=20;
int a[N][N],col[N];
int n,m,k;

int cal(int x)
{
    int ret=0;
    while(x)
    {
        ret++;
        x-=x&-x;
    }
    return ret;
}

// 从大到小排
bool cmp(const int &x, const int &y)
{
    return x>y;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<(1<<n);i++)
    {   
        int cnt=cal(i);
        if(cnt>k)
        {
            continue;
        }
        memset(col,0,sizeof col);
        int sum=0;
        for(int r=0;r<n;r++)
        {
            for(int j=0;j<m;j++)
            {
                if((i>>r)&1)
                {
                    sum+=a[r][j];
                }else {
                    col[j]+=a[r][j];
                }
            }
        }
        sort(col,col+m,cmp);
        for(int h=0;h<min(k-cnt, m);h++)
        {
            sum+=col[h];
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}