#include<bits/stdc++.h>
using namespace std;
const int N=210;
int a[N];
int b[N];
int n,na,nb;
int scorea,scoreb;
void calc(int tmpa,int tmpb)
{
    if(tmpa==0)
    {
        if(tmpb==1||tmpb==4)
        scoreb++;
        if(tmpb==2||tmpb==3)
        scorea++;
    }else if(tmpa==1)
    {
        if(tmpb==0||tmpb==3)
        scorea++;
        if(tmpb==2||tmpb==4)
        scoreb++;
    }else if(tmpa==2)
    {
        if(tmpb==1||tmpb==4)
        scorea++;
        if(tmpb==0||tmpb==3)
        scoreb++;
    }else if(tmpa==3)
    {
        if(tmpb==2||tmpb==4)
        scorea++;
        if(tmpb==0||tmpb==1)
        scoreb++;
    }else{
        if(tmpb==0||tmpb==1)
        scorea++;
        if(tmpb==2||tmpb==3)
        scoreb++;
    }
}
int main()
{
    cin>>n>>na>>nb;
    for(int i=1;i<=na;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=nb;j++)
    {
        cin>>b[j];
    }
    for(int i=1;i<=n;i++)
    {
        int tmpa=i%na;
        if(tmpa==0)
        tmpa=na;
        int tmpb=i%nb;
        if(tmpb==0)
        tmpb=nb;
        calc(a[tmpa],b[tmpb]);
    }
    cout<<scorea<<" "<<scoreb<<endl;
}