#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>s>>k;
    for(int i=0;i<k;i++)
    {
        bool flag=true;
        for(int j=0;j<s.size()-1;j++)
        {
            if(s[j]>s[j+1])
            {
                s.erase(j,1);
                flag=false;
                break;
            }
        }
        if(flag){
            s.pop_back();
        }
    }
    //去除前导零
    while(s.size()>1&&s[0]=='0'){
        s.erase(0,1);
    }
    cout<<s<<endl;
    return 0;
}