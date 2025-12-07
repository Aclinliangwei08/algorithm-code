#include<bits/stdc++.h>
using namespace std;
string s;
string aim="123804765";
unordered_map<string,int> dist;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void bfs()
{
    queue<string> q;
    q.push(s);
    dist[s]=0;
    while(q.size())
    {
        string t= q.front();
        q.pop();
        int pos=0;
        while(t[pos]!='0')
        pos++;
        int k=pos/3;
        int z=pos%3;
        for(int i=0;i<4;i++)
        {
            int x=dx[i]+k;
            int y=dy[i]+z;
            if(x>=0&&x<=2&&y>=0&&y<=2)
            {
                string next=t;
                int u=x*3+y;
                swap(next[u],next[pos]);
                if(dist.count(next))
                continue;
                
                q.push(next);
                dist[next]=dist[t]+1;
                if(aim==next)
                return ;//剪枝
            }

        }
    }
}
int main()
{
    cin>>s;
    bfs();//宽度优先搜索
    cout<<dist[aim]<<endl;
    return 0;
}