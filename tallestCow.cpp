#include<bits/stdc++.h>
using namespace std;
const int N=10010;
int f[N];//差分数组
int main()
{
    int n,i,h,r;
    cin>>n>>i>>h>>r;
    set<pair<int,int>> st;//帮助去重
    while(r--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
        if(st.count({x,y}))
        {
            continue;
        }
        f[x+1]--;
        f[y]++;
        st.insert({x,y});
    }
    for(int i=1;i<=n;i++)
    {
        f[i]+=f[i-1];
        cout<<f[i]+h<<endl;
    }
    return 0;
}