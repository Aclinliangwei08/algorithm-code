#include<bits/stdc++.h>
using namespace std;
int cnt[]={6,2,5,5,4,5,6,3,7,6};
int calc(int x)
{
    if(x==0)
    return 6;
    int sum=0;
    while(x)
    {
        sum+=cnt[x%10];
        x/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            int z=i+j;
            if(calc(i)+calc(j)+calc(z)+4==n)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}