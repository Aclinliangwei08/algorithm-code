#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int h[N],v[N];
int n;
int sum[N];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i]>>v[i];
    }

    //找左边
    stack<int> st;
    for(int i=1;i<=n;i++)
    {
        while(st.size()&&h[st.top()]<=h[i])
        st.pop();
        if(st.size())
        {
            sum[st.top()]+=v[i];
        }
        st.push(i);
    }

    //清空栈内元素
    while(st.size())
    st.pop();

    //找右边
    for(int i=n;i>=1;i--)
    {
        while(st.size()&&h[st.top()]<=h[i])
        st.pop();
        if(st.size())
        {
            sum[st.top()]+=v[i];
        }
        st.push(i);
    }
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        ret=max(ret,sum[i]);
    }
    cout<<ret<<endl;
    return 0;
}