#include<bits/stdc++.h>
using namespace std;
string getOp(vector<string> &a,int i){
    if(i<(int)a.size()){
        return a[i];
    }
    return "ATK";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int HA,DA,HB,DB;
    cin>>HA>>DA>>HB>>DB;
    int maxHA=HA,maxHB=HB;
    cin.ignore();
    vector<string> aa,bb;
    string line;
    getline(cin,line);
    istringstream ssA(line);
    string op;
    while(ssA>>op){
        aa.push_back(op);
    }
    getline(cin,line);
    istringstream ssB(line);
    while(ssB>>op){
        bb.push_back(op);
    }

    int rounds=max(aa.size(),bb.size());
    int poisonA=0,poisonB=0;
    bool guardA=false,guardB=false;
    string result ="";

    for(int i=0;i<rounds;i++)
    {
        //结算中毒
        if(poisonA>0){
            HA-=10;
            poisonA--;
        }
        if(poisonB>0){
            HB-=10;
            poisonB--;
        }

        if(HA<=0 || HB<=0){
            if(HA<=0 && HB<=0){
                result="DRAW";
            }else if(HA<=0){
                result="B WINS HP="+to_string(HB);
            }else{
                result="A WINS HP="+to_string(HA);
            }
            break;
        }

        //A执行本回合指令
        string opA=getOp(aa,i);
        if(opA=="ATK"){
            int dmg=DA;
            if(guardB){
                dmg/=2;
                guardB=false;
            }
            HB-=dmg;
        }else if(opA=="HEAL"){
            HA=min(HA+30,maxHA);
        }else if(opA=="POISON"){
            poisonB=3;
        }else if(opA=="GUARD"){
            guardA=true;
        }

        if(HB<=0){
            result="A WINS HP="+to_string(HA);
            break;
        }

        //B执行本回合指令
        string opB=getOp(bb,i);
        if(opB=="ATK"){
            int dmg=DB;
            if(guardA){
                dmg/=2;
                guardA=false;
            }
            HA-=dmg;
        }else if(opB=="HEAL"){
            HB=min(HB+30,maxHB);
        }else if(opB=="POISON"){
            poisonA=3;
        }else if(opB=="GUARD"){
            guardB=true;
        }

        if(HA<=0){
            result="B WINS HP="+to_string(HB);
            break;
        }
    }

    if(result.empty()){
        if(HA>HB){
            result="A WINS HP="+to_string(HA);
        }else if(HB>HA){
            result="B WINS HP="+to_string(HB);
        }else {
            result="DRAW";
        }
    }
    cout<<result<<endl;
    return 0;
}