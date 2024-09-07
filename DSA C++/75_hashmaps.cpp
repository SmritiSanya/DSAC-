#include<bits/stdc++.h>
using namespace std;

int main(){
    //creation
    unordered_map<string,int>m;

    //insertion

    //1
    pair<string,int>p =make_pair("smriti",3);
    m.insert(p);

    //2
    pair<string,int>pair2("sanya",2);
    m.insert(pair2);

    //3
    m["mera"]=1;
    m["mera"]=2;

    //Search
    cout<<m["mera"]<<endl;
    cout<<m.at("sanya")<<endl;

cout<<"hello"<<endl;

}