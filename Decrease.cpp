#include<bits/stdc++.h>
using namespace std;
int n,m,k;
const int N=5e3+10;
typedef long long LL;
LL arr[N][N];
void insert(int x1,int y1,int x2,int y2,int z)
{
    arr[x1][y1]+=z;
    arr[x2+1][y1]-=z;
    arr[x1][y2+1]-=z;
    arr[x2+1][y2+1]+=z;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        insert(x,y,x,y,z);
    }
    LL ret=0;
    for(int i=1;i<=n-k+1;i++)
    {
        for(int j=1;j<=n-k+1;j++)
        {
            int a=i+k-1;
            int b=j+k-1;
            ret+=abs(arr[i][j]);
            insert(i,j,a,b,-arr[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]!=0)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<ret<<endl;
    return 0;
}