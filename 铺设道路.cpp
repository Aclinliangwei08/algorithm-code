#include<bits/stdc++.h>
using namespace std;
int n;//贪心策略
int main()
{
    cin>>n;
    long long sum=0;
    int x;
    cin>>x;
    sum=x;
    int before=x;
    for(int i=2;i<=n;i++)
    {
        cin>>x;
        if(x>before)
        {
            sum+=(x-before);
        }
        before=x;
    }
    cout<<sum<<endl;
    return 0;
}