#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n;
int a[N];
int ret[N];
//寻找当前元素左侧，离他最近，并且比它大的元素在哪
void test1()
{
    stack<int> st;
    for(int i=1;i<=n;i++)
    {
        while(st.size()&&a[st.top()]<=a[i])
        st.pop();
        if(st.size())
        ret[i]=st.top();
        st.push(i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ret[i]<<" ";
    }
    cout<<endl;
}
//寻找当前元素左侧，离他最近，并且比它小的元素在哪
void test2()
{
    stack<int> st;
    for(int i=1;i<=n;i++)
    {
        while(st.size()&&a[st.top()]>=a[i])
        st.pop();
        if(st.size())
        ret[i]=st.top();
        st.push(i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ret[i]<<" ";
    }
}
//寻找当前元素右侧，离他最近，并且比它大的元素在哪
void test3()
{
    stack<int> st;
    for(int i=n;i>=1;i--)
    {
        while(st.size()&&a[st.top()]<=a[i])
        st.pop();
        if(st.size())
        ret[i]=st.top();
        st.push(i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ret[i]<<" ";
    }
    cout<<endl;
}
//寻找当前元素右侧，离他最近，并且比他小的元素在哪
void test4()
{
    stack<int> st;
    for(int i=n;i>=0;i--)
    {
        while(st.size()&&a[st.top()]>=a[i])
        st.pop();
        if(st.size())
        ret[i]=st.top();
        st.push(i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ret[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    test4();
    return 0;
}