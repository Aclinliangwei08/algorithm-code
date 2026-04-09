#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    int prev=0,cnt=0;
    for(int i=1;i<n;i++)
    {
        int d=h[i+1]-h[i];
        if(d==0)
        continue;
        d=(d>0)?1:-1;
        if(prev!=d)
        {
            cnt++;
        }
        prev=d;
    } 
    cout<<cnt+1<<endl;
    return 0;
}