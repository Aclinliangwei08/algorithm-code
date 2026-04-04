#include<bits/stdc++.h>
using namespace std;
int dfs(int n,int begin,int i,int j)
{
    if(i==1)
    return begin+j;
    else if(j==n)
    return begin+i+n-1;
    else if(i==n)
    return begin+3*n-j-1;
    else if(j==1)
    return begin+4*n-i-2;
    return dfs(n-2,begin+4*(n-1),i-1,j-1);
}
int main()
{
    int n,i,j;
    cin>>n>>i>>j;
    cout<<dfs(n,0,i,j)<<endl;
    return 0;
}