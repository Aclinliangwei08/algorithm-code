#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int arr[N];
int pre[N];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }
   
    int ans=0;
      int r=1;
    for(int l=1;l<=n;l++)
    {
       
        while(r<=n&&(arr[r]-arr[l]<=k))
        r++;
        ans=max(ans,pre[r-1]-pre[l-1]);
    }
    cout<<ans<<endl;
}