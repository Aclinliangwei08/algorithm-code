#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
int n;
int main()
{
    cin>>n;
    int sum=0,ret=0;
    mp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        x=-1;
        sum+=x;
        if(mp.count(sum))
        ret=max(ret,i-mp[sum]);
        else
        mp[sum]=i;
    }
    cout<<ret<<endl;
    return 0;
}