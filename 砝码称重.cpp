#include<bits/stdc++.h>
using namespace std;
const int N=10;
const int M=1010;
int w[]={0,1,2,3,5,10,20};
int n=6,m=1000;
int a[N];
int f[M];
int main()
{
    for(int i=1;i<=n;i++)
    cin>>a[i];
    f[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=0;j--)
        {
            for(int k=0;k<=a[i]&&k*w[i]<=j;k++)
            {
                f[j]=f[j] || f[j-k*w[i]];
            }
        }
    }
    int ret=0;
    for(int i=1;i<=m;i++)
    {
        if(f[i]){
            ret++;
        }
    }
    cout<<"Total="<<ret<<endl;
    return 0;
}