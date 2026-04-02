#include<bits/stdc++.h>
using namespace std;
struct apple{
    int x;
    int y;
};
const int N=5010;
apple arr[N];
bool cmp(apple a,apple b)
{
    return a.y<b.y;
}
int main()
{
    int n,s,a,b;
    cin>>n>>s>>a>>b;
    int h=a+b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].x>>arr[i].y;
    }
    sort(arr,arr+n,cmp);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s>=arr[i].y&&arr[i].x<=h)
        {
            s-=arr[i].y;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}