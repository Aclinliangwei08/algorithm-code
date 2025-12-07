#include<bits/stdc++.h>
using namespace std;
int n;
const int N=15;
bool col[N],st1[N*2],st2[N*2];
vector<int> ans;
int ret;
void dfs(int path)
{
    if(path>n)
    {
        if(ret<3)
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        ret++;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!col[i]&&!st1[path+i]&&!st2[i-path+n])
        {
            col[i]=st1[path+i]=st2[i-path+n]=true;
            ans.push_back(i);
            dfs(path+1);
            ans.pop_back();
            col[i]=st1[path+i]=st2[i-path+n]=false;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<ret<<endl;
    return 0;
}