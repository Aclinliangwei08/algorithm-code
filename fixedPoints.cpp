#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];
int n;
int main()
{
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==arr[i])
        ans++;
    }
    if(ans==n)
   {
     cout<<ans<<endl;
     return 0;
   }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=i&&arr[arr[i]]==i)
        {
            ans+=2;
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}