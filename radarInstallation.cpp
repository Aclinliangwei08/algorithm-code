#include<bits/stdc++.h>
using namespace std;
const int N=1010;
struct ndd{
    double l,r;
}arr[N];
int n;
double d;

bool cmp(ndd& x,ndd& y)
{
    return x.l<y.l;
}
int main()
{
    int cnt=0;
    while(cin>>n>>d,n&&d)
    {
        bool flag=false;
        cnt++;
        double x,y;
        for(int i=1;i<=n;i++)
        {
            cin>>x>>y;
            double tmp =sqrt(d*d-y*y);
            if(y>d)
            flag=true;
            arr[i].l=x-tmp;
            arr[i].r=x+tmp;
        }
        cout<<"Case "<<cnt<<": ";
        if(flag)
        cout<<-1<<endl;
        else
        {
            sort(arr+1,arr+1+n,cmp);
            int res=1;
            double r=arr[1].r;
            for(int i=2;i<=n;i++)
            {
                if(arr[i].l<=r)
                {
                    r=min(r,arr[i].r);
                }else{
                    res++;
                    r=arr[i].r;
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}