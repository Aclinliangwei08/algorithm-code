#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long z=n/k;
    long long m=n%k;
    if(m==0)
    cout<<k<<endl;
    else
    cout<<k-m;
    return 0;
}