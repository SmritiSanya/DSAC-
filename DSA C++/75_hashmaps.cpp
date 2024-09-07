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

    //size
    cout<<m.size()<<endl;

    //to check prescence
    cout<<m.count("sanya")<<endl;

    m.erase("sanya");
    cout<<m.size()<<endl;

    for(auto i:m){
        cout<<i.first<<","<<i.second<<endl;
    }

    return 0;

}