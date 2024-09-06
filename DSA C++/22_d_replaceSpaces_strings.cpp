#include<iostream>
#include<string>
using namespace std;

string replaceSpace(string s){
    string temp="";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){ 
            temp.push_back(s[i]);  // Keep the original character if it's not a space
        }
        else{
            temp.push_back('@');  // Replace space with '@'
        }
    }
    return temp;
}

//without using temp
/*
void replaceSpace(string &s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            s[i] = '@';  // Replace space with '@'
        }
    }
}
*/

int main(){
    string s = "Smriti Sanya";
    cout << replaceSpace(s) << endl;  // Output the result
    return 0;
}
