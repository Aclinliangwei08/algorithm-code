#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n,ret;
string s[N];
int cnt[N]; //用于标记使用了几次
void dfs(string path)
{
    if(path.size()>ret)
    ret=path.size();

    for(int i=1;i<=n;i++)
    {
        if(cnt[i]>=2)
        continue;
        int cur1=path.size()-1,cur2=0;
        while(cur1>=1 && cur2<s[i].size()-1)
        {
            if(path.substr(cur1)==s[i].substr(0,cur2+1))
            {
                cnt[i]++;
                dfs(path+s[i].substr(cur2+1));
                cnt[i]--;
            }
            cur1--;
            cur2++;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    char ch;
    cin>>ch;
    for(int i=1;i<=n;i++)
    {
        if(s[i][0]==ch)
        {
            cnt[i]++;
            dfs(s[i]);
            cnt[i]--;
        }
    }
    cout<<ret<<endl;
    return 0;
}