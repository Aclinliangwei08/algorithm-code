#include<bits/stdc++.h>
using namespace std;
int n;
const int N=2e5+10;
int ne[N];
int in[N];
bool st[N];
int cnt;
void dfs(int a)
{
    cnt++;
    st[a]=true;
    int b=ne[a];
    if(!st[b]){
        dfs(b);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ne[i];
        in[ne[i]]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0){
            q.push(i);
        }
    }
    while(q.size())
    {
        int a=q.front();
        q.pop();
        st[a]=true;
        int b=ne[a];
        in[b]--;
        if(in[b]==0){
            q.push(b);
        }
    }

    //利用dfs计算环的大小
    int ret=n;
    for(int i=1;i<=n;i++)
    {
        if(!st[i]){
            cnt=0;
            dfs(i);
            ret=min(ret,cnt);
        }
    }
    cout<<ret<<endl;
    return 0;
}