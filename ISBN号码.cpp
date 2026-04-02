#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int j=1;
    int sum=(s[0]-'0')*j;
    for(int i=2;i<=4;i++)
    {
        j++;
        sum+=(s[i]-'0')*j;
    }
    for(int i=6;i<=10;i++)
    {
        j++;
       sum+=(s[i]-'0')*j;
    }
    int ans=sum%11;
    char c;
    if(ans==10){
        c='X';
    }else{
        c=ans+'0';
    }
    if(s[12]==c){
        cout<<"Right"<<endl;
    }else{
        for(int i=0;i<12;i++){
            cout<<s[i];
        }
        cout<<c<<endl;
    }
    return 0;
}