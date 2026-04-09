#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans[3]={0,0,0};
    string s;
    cin>>s;
    stringstream ss(s);
    string lint;
    while(getline(ss,lint,';'))
    {
        if(lint.empty())
        continue;
        char z=lint[0];
        char k=lint[3];
        int val;
        if(k>='0'&&k<='9')
        val=k-'0';
        else
        val=ans[k-'a'];
        ans[z-'a']=val;
    }
    for(int i=0;i<3;i++)
    {
        if(i)
        cout<<" ";
        cout<<ans[i];
    }
    return 0;
}