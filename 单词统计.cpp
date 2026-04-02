#include<bits/stdc++.h>
using namespace std;
int begin,end,cnt;
int main()
{
    string s ;
    cin>>s;
    int e=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' '&&s[i+1]==' ')
        {
            cnt++;
        }
        

    }
    return 0;
}