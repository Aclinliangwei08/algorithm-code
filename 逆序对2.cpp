#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n;
int tmp[N];
int a[N];
typedef long long LL;
LL merge(int left,int right)
{
    if(left>=right)
    return 0;
    LL ret =0;
    int mid=(left+right)/2;
    ret+=merge(left,mid);
    ret+=merge(mid+1,right);
    // 一左一右
    int cur1=left,cur2=mid+1,i=left;
    while(cur1<=mid&&cur2<=right)
    {
        if(a[cur1]<=a[cur2])
        tmp[i++]=a[cur1++];
        else
        {
            ret+=mid-cur1+1;
            tmp[i++]=a[cur2++];
        }
    }
    while(cur1<=mid)
    tmp[i++]=a[cur1++];
    while(cur2<=right)
    tmp[i++]=a[cur2++];
    for(int j=left;j<=right;j++)
    {
        a[j]=tmp[j];
    }
    return ret;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<merge(1,n)<<endl;
    return 0;
}