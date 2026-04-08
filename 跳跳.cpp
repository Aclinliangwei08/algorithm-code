#include<bits/stdc++.h>
using namespace std;
const int N=310;
typedef long long LL;
int n;
int h[N];
LL sum;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    sort(h+1,h+1+n);
    int left=0,right=n;
    int ret=1;
    while(h[left]<h[right])
    {
        sum+=pow(h[left]-h[right],2);
        if(ret%2==1)
        {
            left++;
        }else{
            right--;
        }
        ret++;
    }
    cout<<sum<<endl;
    return 0;
}