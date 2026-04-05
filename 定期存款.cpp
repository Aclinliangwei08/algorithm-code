#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a=10000.0;
    double b=12000.0;
    for(int i=1;i<=5;i++)
    {
        a*=1.035;
    }
    cout<<a<<" "<<b;
    return 0;
}