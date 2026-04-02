#include<bits/stdc++.h>
using namespace std;
const int N=5e5 + 10;
//字典序
int e[N];
int tr[N][26];
int idx;
int n,m;

void insert(string& s)
{
    int cur=0;
    for(auto ch:s)
    {
        int path=ch-'a';
        if(tr[cur][path]==0)
        tr[cur][path]=++idx;
        cur=tr[cur][path];
    }
    e[cur]++;
}
int find_all(string& s)
{
    int cur =0;
    for(auto ch: s)
    {
        int path=ch-'a';
        if(tr[cur][path]==0)
        return 0;
        cur=tr[cur][path];
    }
    if(e[cur]>0)
    {
        int t=e[cur];
        e[cur]=-1;
        return t;
    }
    return e[cur];
}
int main()
{
    scanf("%d",&n);
    string s;
    while(n--)
    {
        cin>>s;
        insert(s);
    }
    cin>>m;
    while(m--)
    {
        cin>>s;
        int node=find_all(s);
        if (node == 0)
        {
            printf("WRONG\n");
        }
        else if (node >0)
        {
            printf("OK\n");
        }
        else
        {
            printf("REPEAT\n");
        }
    }
    return 0;
}