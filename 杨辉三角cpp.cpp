#include<bits/stdc++.h>
using namespace std;
const int N=25;
int arr[N][N];
int main()
{
    int n;
    cin>>n;
    arr[0][0]=1;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                {
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                    cout<<arr[i][j]<<" ";
                }
            cout<<endl;
        }
    return 0;
}