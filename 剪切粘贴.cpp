#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int a,b;
    string v,z;
    while(n--)
    {
        cin>>a>>b>>v>>z;
        string cur=s.substr(a-1,b-a+1);
        s=s.substr(0,a-1)+s.substr(b);
        string kk=v+z;
        int pos =s.find(kk);
        int insertPos=0;
        if(pos==string::npos){
            insertPos=s.size();
        }else{
            insertPos=pos+v.size();
        }
        s=s.substr(0,insertPos)+cur+s.substr(insertPos);
    }
         cout<<s<<endl;
        return 0;
}