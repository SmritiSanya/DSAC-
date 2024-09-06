#include<iostream>
using namespace std;

string removeSubstring(string s, string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string s="daccaccbb";
    string part="acc";

    string ans= removeSubstring(s,part);
    cout<<ans<<endl;
}