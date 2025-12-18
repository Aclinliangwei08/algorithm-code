#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
int x[N],y[N];
int n;
int main()
{
    while(cin>>n,n)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>h[i];
        }
        //找左边，小
        stack<int> st;
        for(int i=1;i<=n;i++)
        {
            while(st.size()&&h[st.top()]>=h[i])
            st.pop();
            if(st.size())
            x[i]=st.top();
            else
            x[i]=0;
            st.push(i);
        }
        while(st.size())
        st.pop();
        for(int i=n;i>=1;i--)
        {
            while(st.size()&&h[st.top()]>=h[i])
            {
                st.pop();
            }
            if(st.size())
            {
                y[i]=st.top();
            }else{
                y[i]=n+1;
            }
            st.push(i);
        }
        int ret=0;
        for(int i=1;i<=n;i++)
        {
            ret=max(ret,h[i]*(y[i]-x[i]-1));
        }
        cout<<ret<<endl;
    }
    return 0;
}