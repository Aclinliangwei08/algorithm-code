#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];//用贪心算法
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    int z=n/2;
    long long sum=0;
    if(n%2==0)
    {
        for(int i=1;i<=z;i++)
        {
            int j=n-i+1;
            sum+=arr[j]-arr[i];
        }
    }else{
        int s=arr[z+1];
        for(int i=1;i<=n;i++)
        {
            sum+=abs(arr[i]-s);
        }
    }
    cout<<sum<<endl;
    return 0;
}