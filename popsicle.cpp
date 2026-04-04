#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int T;
    cin>>T;
    string s;
    while(T--)
    {
        cin>>s;
        LL sum=0;
        bool flag=false;
        for(auto ch:s)
        {
            sum+=ch-'0';
            if(ch=='0')
            flag=true;
        }
        if(flag){
            cout<<sum+9<<endl;
        }else{
            cout<<sum+8<<endl;
        }
    }
    return 0;
}