#include<bits/stdc++.h>
using namespace std;
const int N=3e4+10;
int arr[N];
int w,n;
int main()
{
    cin>>w>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    int i=1,j=n;//贪心算法
    int ret=0;
    while(i<=j)
    {
        int z=arr[i]+arr[j];
        if(z>w)
        {
            ret++;
            j--;
        }else{
            i++;
            j--;
            ret++;
        }
    }
    cout<<ret<<endl;
    return 0;
}