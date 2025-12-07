#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> res;
bool arr[15];
void dfs(int t)
{
    if(t>k)
    {
        for(int i=0;i<k;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!arr[i])
        {
            res.push_back(i);
            arr[i]=true;
            dfs(t+1);
            arr[i]=false;
            res.pop_back();
        }
    }
}
int main()
{
    cin>>n>>k;
    dfs(1);
    return 0;
}