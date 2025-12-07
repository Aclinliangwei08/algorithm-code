#include<bits/stdc++.h>
using namespace std;

void dfs(int n, char from, char mid, char to){
    if(n==0) return;
    dfs(n-1, from, to, mid);
    printf("%c->%d->%c\n", from, n, to);
    dfs(n-1, mid, from, to);
}

int main(){
    int n;
    char x, y, z;
    cin >> n >> x >> y >> z;
    dfs(n, x, y, z);
    return 0;
}