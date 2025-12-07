#include<bits/stdc++.h>
using namespace std;
int n,k;
int ret;
int ans;
void dfs(int pos,int begin)
{
    if(pos==k)
    {
        if(ret==n)
        {
            ans++;
        }
         return;
    }
    for(int i=begin;i<=n;i++)
    {
        if((ret+(k-pos)*i)>n)
        return ;
        ret+=i;
        dfs(pos+1,i);
        ret-=i;
    }
}
int main()
{
    cin>>n>>k;
    dfs(0,1);
    cout<<ans<<endl;
    return 0;
}