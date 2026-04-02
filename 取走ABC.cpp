#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s;
   cin>>s;
   long long Acount=0;
   long long ABcount=0;
   long long ans=0;
   for(char c: s)
   {
        if(c=='A')
        {
            Acount++;
        }else if(c=='B')
        {
            if(Acount>0)
            {
                Acount--;
                ABcount++;
            }
        }else if(c=='C')
        {
            if(ABcount>0)
            {
                ABcount--;
                ans++;
            }
        }
   }
   cout<<ans<<endl;
    return 0;
}