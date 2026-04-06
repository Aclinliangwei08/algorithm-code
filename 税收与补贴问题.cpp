#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int aim,z,u;
int c[N];
int main()
{
    cin>>aim;
    cin>>z>>u;
    c[z]=u;
    int x,y;
    int prev=z;//前一个定价

    while(cin>>x>>y,x!=-1&&y!=-1)
    {
        int d=(c[prev]-y)/(x-prev);
        for(int i=prev+1,j=c[prev]-d;i<=x;i++,j-=d)
        {
            c[i]=j;
        }
        prev=x;
    }

    int d;
    cin>>d;
    for(int i=prev+1,j=c[prev]-d;j>=0;i++,j-=d)
    {
        c[i]=j;
        prev=i;
    }
    // for(int i=z;i<=prev;i++)
    // {
    //     cout<<i<<" "<<c[i]<<endl;
    // }

    double left=-1e9,right=1e9;
    for(int i=z;i<=prev;i++)
    {
        double tmp=1.0*((aim-z)*c[aim]-(i-z)*c[i])/(c[i]-c[aim]);
        if(c[aim]>c[i])
        left=max(left,tmp);
        else if(c[aim]<c[i])
        right=min(right,tmp);
    }
    if(left>right)
    cout<<"NO SOLUTION"<<endl;
    else if(left>0)
    cout<<(int)ceil(left)<<endl;
    else if(right<0)
    cout<<(int)floor(right)<<endl;
    else
    cout<<0<<endl;
    return 0;
}