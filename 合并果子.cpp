#include<bits/stdc++.h>
using namespace std;
int n;
const int N=1e4+10;
int arr[N];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    long long sum=0;
    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i];
        sum+=arr[i];
        sort(arr+i,arr+n);
    }
    cout<<sum<<endl;
    return 0;
}