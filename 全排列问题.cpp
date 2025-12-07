#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> ans;
bool used[15];
void dfs(int t)
{
    if(t>n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%5d",ans[i]);
        }
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        {
            ans.push_back(i);
            used[i]=true;
            dfs(t+1);
            ans.pop_back();
            used[i]=false;
        }
    }

}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}