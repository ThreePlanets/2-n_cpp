#include <bits/stdc++.h>
using namespace std;

string m2n(string n){
    string out="";
    int j=0;

    for(int i=n.size()-1;i>=0;i--){
        int d=(n[i]-'0')*2,v;
        v=d%10;
        out=char((v+j)+'0')+out;
        j=d/10;
    }
    if (j) out=char(j+'0')+out;

    return out;
}

int main(){
    freopen("m2n.txt","w",stdout);
    int a;
    string num="1";
    cin>>a;
    cout<<"2^0="<<num<<endl;
    for(int i=1;i<=a;i++){
        num=m2n(num);
        cout<<"2^"<<i<<"="<<num<<endl;
    }

    return 0;
}