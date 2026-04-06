#include<bits/stdc++.h>
using namespace std;
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ans;
int t=7;
bool check(int month,int day)
{
    if(t%7==1)
    return true;
    while(month)
    {
        if(month%10==1)
        {
            return true;
        }
        month/=10;
    }
    while(day)
    {
        if(day%10==1)
        {
            return true;
        }
        day/=10;
    }
    return false;
}
int main()
{
    for(int i=1;i<=12;i++)
    {
        for(int j=1;j<=days[i];j++)
        {
            if(check(i,j))
            {
                ans+=5;
            }else{
                ans+=1;
            }
            t++;
        }
    }
    cout<<ans<<endl;
    return 0;
}