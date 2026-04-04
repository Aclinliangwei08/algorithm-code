#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
unordered_map<LL,int> mp;
int main()
{
    int m;
    cin>>m;
    mp[0]=0;
    int n=(m+1)/2;
    LL sum=0;
    for(int i=1;i<=n;i++)
    {   
        sum+=i;
        if(mp.count(sum-m))
        {
            cout<<mp[sum-m]+1<<" "<<i<<endl;
        }
        mp[sum]=i;
    }
    return 0;
}