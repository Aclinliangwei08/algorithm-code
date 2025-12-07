#include<bits/stdc++.h>
using namespace std;
const int N=5e6+10;
int n,k;
int a[N];
int ret;
int sum;
bool isPrime(int x)
{
    if(x<=1)
    return false;
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
void dfs(int pos ,int begin)
{
    if(pos>k)
    {
        if(isPrime(sum))
        {
            ret++;
        }
        return;
    }

    for(int i=begin;i<=n;i++)
    {
        sum+=a[i];
        dfs(pos+1,i+1);
        sum-=a[i];
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dfs(1,1);
    cout<<ret<<endl;
    return 0;
}