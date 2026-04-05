#include<bits/stdc++.h>
using namespace std;
const int N=1010;
struct node{
    int po;
    int t;
}arr[N];
int n;
bool cmp(node& a,node& b)
{
    if(a.t!=b.t)
    {
        return a.t<b.t;
    }
    return a.po<b.po;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].t;
        arr[i].po=i;
    }
    sort(arr+1,arr+1+n,cmp);
    double sum=0.0;
    for(int i=1;i<=n;i++)
    {
        sum+=arr[i].t*(n-i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i].po<<" ";
    }
   printf("\n%.2f\n",sum/n);
    return 0;
}