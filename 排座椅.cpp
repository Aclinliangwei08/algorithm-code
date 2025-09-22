#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int m,n,k,l,d;
struct nod{
    int q,score;
}ax[N],ay[N];

bool cmp(nod a,nod b){
    if(a.score==b.score) return a.q<b.q;
    return a.score>b.score;
}

int main(){
    cin>>m>>n>>k>>l>>d;
    // 初始化行列
    for(int i=1;i<m;i++) ax[i].q=i, ax[i].score=0;
    for(int j=1;j<n;j++) ay[j].q=j, ay[j].score=0;

    int x1,y1,x2,y2;
    while(d--){
        cin>>x1>>y1>>x2>>y2;
        if(x1!=x2){ // 横向相邻 -> 行之间加分
            int z=min(x1,x2);
            ax[z].score++;
        }else{      // 纵向相邻 -> 列之间加分
            int z=min(y1,y2);
            ay[z].score++;
        }
    }

    sort(ax+1, ax+m, cmp);
    sort(ay+1, ay+n, cmp);

    // 取前k行、l列，升序输出
    vector<int> row, col;
    for(int i=1;i<=k;i++) row.push_back(ax[i].q);
    for(int i=1;i<=l;i++) col.push_back(ay[i].q);

    sort(row.begin(),row.end());
    sort(col.begin(),col.end());

    for(int i=0;i<k;i++){
        if(i) cout<<" ";
        cout<<row[i];
    }
    cout<<"\n";
    for(int i=0;i<l;i++){
        if(i) cout<<" ";
        cout<<col[i];
    }
    return 0;
}