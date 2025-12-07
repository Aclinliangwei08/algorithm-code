#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> arr;
void dfs(int path)
{
    if(m==arr.size())
    {
        for(auto x:arr)
        cout<<x<<" ";
        cout<<endl;
        return ;
    }
    for(int i=path;i<=n;i++)
    {
        arr.push_back(i);
        dfs(i+1);
        arr.pop_back();
    }
}
int main()
{
    cin>>n>>m;
    dfs(1);
}

