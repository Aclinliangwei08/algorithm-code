#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL sum;
LL n;
int arr[10];
void calc(int t)
{
    if(t<3)
    sum+=arr[1];
    else if(t<7)
    sum+=arr[2];
    else if(t<30)
    sum+=arr[3];
    else if(t<120)
    sum+=arr[4];
    else if(t<365)
    sum+=arr[5];
    else 
    sum+=arr[6];
}
int main()
{
    cin>>n;
    for(int i=1;i<=6;i++)
    {
        cin>>arr[i];
    }
    int be=0;
    int x=0;
    while(n--)
    {
        cin>>x;
        if(x==1)
        {
            be++;
            calc(be);  
        }else{
            be=0;
        }
    }
    cout<<sum<<endl;
    return 0;
}