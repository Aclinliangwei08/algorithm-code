#include<bits/stdc++.h>
using namespace std;
int n,k;
const int N=1e6+10;
int a[N];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    deque<int> q;//存下标
    //求最小值
    for(int i=1;i<=n;i++)
    {
        while(q.size()&&a[q.back()]>=a[i])
        q.pop_back();
        q.push_back(i);
        if(q.back()-q.front()+1>k)
        q.pop_front();
        if(i>=k)
        cout<<a[q.front()]<<" ";
    }
    cout<<endl;
    q.clear();
    //求最大值
    for(int i=1;i<=n;i++)
    {
        while(q.size()&&a[q.back()]<=a[i])
        q.pop_back();
        q.push_back(i);
        if(q.back()-q.front()+1>k)
        q.pop_front();
        if(i>=k)
        cout<<a[q.front()]<<" ";
    }
    return 0;
}