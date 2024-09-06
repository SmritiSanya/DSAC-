#include<iostream>
#include<vector>

using namespace std;
bool valid(char ch){ //remove all non alphanumeric characters
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}

char toLowerCase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool palindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    string s="A man, a plan, a canal: Panama";
    string temp = "";

    // Remove non-alphanumeric characters and convert to lowercase
    for(int i=0; i<s.length(); i++){
        if(valid(s[i])){
            temp.push_back(toLowerCase(s[i]));
        }
    }

    // Check if the processed string is a palindrome
    if(palindrome(temp)){
        cout << "The phrase is a palindrome." << endl;
    }
    else{
        cout << "The phrase is not a palindrome." << endl;
    }

    return 0;
}