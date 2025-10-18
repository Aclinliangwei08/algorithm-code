#include<bits/stdc++.h>
using namespace std;
const int N=25;
string arr[N];
int n;
bool cmp(string a,string b)
{
    return a+b>b+a;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,cmp);
    string ans;
    for(int i=0;i<n;i++)
    {
        ans+=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}