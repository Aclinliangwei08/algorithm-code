#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total=0;
    int arr[20];
    for(int i=1;i<=10;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    t+=30;
    for(int i=1;i<=10;i++)
    {
        if(arr[i]<=t)
        {
            total++;
        }
    }
    cout<<total<<endl;
    return 0;
}