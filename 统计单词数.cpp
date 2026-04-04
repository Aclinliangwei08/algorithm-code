#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    getchar();
    getline(cin,t);
    s=' '+s+' ';
    t=' '+t+' ';
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<t.size();i++)
    {
        t[i]=tolower(t[i]);
    }
    if(t.find(s)==-1)
    cout<<-1<<endl;
    else
    {
        int f=0,cnt=0;
        f=t.find(s);
        int pos=0;
        while(t.find(s,pos)!=-1)
        {
            pos=t.find(s,pos);
            cnt++;
            pos++;
        }
        cout<<cnt<<" "<<f;
    }
}