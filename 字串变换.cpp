#include<bits/stdc++.h>
using namespace std;
const int N=10;
string a,b;
unordered_map<string,int> mp;
string x[N],y[N];
int n;
int bfs()
{
    if(a==b){
        return 0;
    }
    queue<string> q;
    q.push(a);
    mp[a]=0;
    while(q.size()){
        string s=q.front();
        q.pop();
        if(mp[s]>=10){
            return -1;
        }
        for(int i=0;i<n;i++)
        {
            int pos=0;
            while(s.find(x[i],pos)!=-1)
            {
                pos=s.find(x[i],pos);
                string tmp=s.substr(0,pos)+y[i]+s.substr(pos+x[i].size());
                pos++;
                if(mp.count(tmp)){
                    continue;
                }
                mp[tmp]=mp[s]+1;
                q.push(tmp);
                if(tmp==b){
                    return mp[tmp];
                }
            }
        }
    }
    return -1;
}
int main()
{
    cin>>a>>b;
    while(cin>>x[n]>>y[n]){
        n++;
    }
    int ret=bfs();
    if(ret==-1){
        cout<<"NO ANSWER!"<<endl;
    }else{
        cout<<ret<<endl;
    }
    return 0;
}