#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct node{
    int begin;
    int end;
}arr[N];
int n;
bool cmp(node a,node b){
    return a.end<b.end;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].begin>>arr[i].end;
    }
    sort(arr,arr+n,cmp);
    int ret=1;
    int z=arr[0].end;
    for(int i=1;i<n;i++)
    {
        if(arr[i].begin>=z)
        {
            ret++;
        }
        z=arr[i].end;
    }
    cout<<ret;
    return 0;
}