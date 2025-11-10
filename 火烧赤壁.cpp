#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=2e4+10;
struct tep{
    LL first;
    LL second;
}arr[N];
LL n,a,b;
bool cmp(tep& x,tep& y)
{
    return x.first<y.first;//按着火位置的起点升序排序
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;//输入
    }
    sort(arr,arr+n,cmp);
    LL l=arr[0].first,r=arr[0].second;
    LL ans=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i].first>r)//不相交，结算
        {
            ans+=(r-l);
            l=arr[i].first;
            r=arr[i].second;
        }else{
            r=max(arr[i].second,r);//相交，合并
        }
    }
    ans+=r-l;
    cout<<ans<<endl;
    return 0;
}