#include<iostream>
using namespace std;

void reverse(string&  str, int i){
    int j=str.length()-i-1;
    //base case
    if(i>j){
        return;
    }
    //preprocessing
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive relation
    reverse(str,i);
}

int main(){
    string name="smriti";
    reverse(name,0);
    cout<<name<<endl;
    return 0;
}
