#include<bits/stdc++.h>
using namespace std;
const int N=300;
int m,s,c;
int a[N];
int b[N]; //牛棚间隔
bool cmp(int x,int y)
{   
    return x>y;
}
int main()
{
    cin>>m>>s>>c;
    for(int i=1;i<=c;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+c);
    for(int i=1;i<c;i++)
    {
        b[i]=a[i+1]-a[i]-1;
    }
    sort(b+1,b+1+c,cmp);
    int ret=a[c]-a[1]+1;
    for(int i=1;i<m&&i<c;i++)
    {
        ret-=b[i];
    }
    cout<<ret<<endl;
    return 0;
}