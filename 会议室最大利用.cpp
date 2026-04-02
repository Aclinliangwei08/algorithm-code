#include<bits/stdc++.h>
using namespace std;
struct node {
    int start;
    int end;
    int id;
};
vector<node> ve;
int n;
bool cmp1(node &a,node &b)
{
    return a.end<b.end;
}
bool cmp2(int a,int b)
{
    return ve[a-1].start<ve[b-1].start;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ve[i].start>>ve[i].end;
        ve[i].id=i+1;
    }
    sort(ve.begin(),ve.end(),cmp1);
    int last_end=-1;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(ve[i].start>=last_end)
        {
            ans.push_back(ve[i].id);
            last_end=ve[i].end;
        }
    }
    sort(ans.begin(),ans.end(),cmp2);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}