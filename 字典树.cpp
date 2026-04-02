#include<bits/stdc++.h>
using namespace std;
const int N=3e6+10;
int tr[N][62];
int p[N];
int idx;
int T,n,q;
string s;
int get_num(char x)
{
    if(x>='a'&&x<='z')
    return x-'a';
    else if(x>='A'&&x<='Z')
    return  x-'A'+26;
    else
    return x-'0'+52;
}
void insert(string& s)
{
    int cur=0;
    p[cur]++;
    for(auto x:s)
    {
        int path=get_num(x);
        if(tr[cur][path]==0)
        tr[cur][path]=++idx;
        cur = tr[cur][path];
        p[cur]++;
    }
}
int find_pre(string& s)
{
    int cur =0;
    for(auto x: s)
    {
        int path=get_num(x);
        if(tr[cur][path]==0)
        return 0;
        cur=tr[cur][path];
    }
    return p[cur];
}
int main()
{
    cin>>T;
    while(T--)
    {
        //清空
        for(int i=0;i<=idx;i++)
        {
            for(int j=0;j<62;j++)
            {
                tr[i][j]=0;
            }
        }
        for(int i=0;i<=idx;i++)
        p[i]=0;
        idx=0;

        cin>>n>>q;
        while(n--)
        {
            cin>>s;
            insert(s);
        }
        while(q--)
        {
            cin>>s;
            cout<<find_pre(s)<<endl;
        }
    

    }
}