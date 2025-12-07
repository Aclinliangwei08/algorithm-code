#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void dfs(int w){
    if(w>n)
    {
        cout<<s<<endl;
        return ;
    }
    //不选
    s+='N';
    dfs(w+1);
    s.pop_back();
    //选
    s+='Y';
    dfs(w+1);
    s.pop_back();
}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}