#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while(getline(cin,s))
        {
            if(s.substr(0,4)=="### ")
            {
                string inner = s.substr(4);
                cout<<"<h3>"<<inner<<"</h3>\n";
            }else if(s.substr(0,3)=="## ")
            {
                string inner =s.substr(3);
                cout<<"<h2>"<<inner<<"</h2>\n";
            }else if(s.substr(0,2)=="# ")
            {
                string inner=s.substr(2);
                cout<<"<h3>"<<inner<<"</h3>\n";
            }else if(s.substr(0,2)=="**")
            {
                string inner=s.substr(2,s.size()-4);
                cout<<"<strong>"<<inner<<"</strong\n";
            }else if(s.substr(0,1)=="*"&&s[1]!='*')
            {
                string inner =s.substr(1,s.size()-2);
                cout<<"<em>"<<inner<<"/em\n";
            }else if(s.substr(0,1)=="[")
            {
                int mid=s.find("](");
                string url = s.substr(mid+2,s.size());
                string inner=s.substr(1,mid-1);
                cout<<"<a href=\""<<url<<"\">"<<inner<<"</a>";
            }else {
                cout<<"<p>"<<s<<"</p>\n";
            }
        }
    return 0;
}