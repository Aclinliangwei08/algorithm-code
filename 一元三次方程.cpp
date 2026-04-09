#include<bits/stdc++.h>
using namespace std;
double a,b,c,d;
double f(double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
double solve(double x,double y)
{
    while(y-x>1e-7)
    {
        double mid=(y+x)/2;
        if(f(x)*f(mid)<=0)
        y=mid;
        else
        x=mid;
    }
    return (x+y)/2;
}
int main()
{
    cin>>a>>b>>c>>d;
    int cnt=0;
    double ans[3];
    for(double i=-100;i<100;i++)
    {
        if(f(i)==0)
        {
            ans[cnt++]=i;
        }else if(f(i)*f(i+1)<0)
        {
            ans[cnt++]=solve(i,i+1);
        }
    }
    if(f(100)==0)
    ans[cnt++]=100;
    for(int i=0;i<3;i++)
    {
        if(i)
        cout<<" ";
        printf("%.2f",ans[i]);
    }
    cout<<endl;
    return 0;
}