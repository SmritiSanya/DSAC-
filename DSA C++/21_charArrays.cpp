#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}


bool palindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int e=n-1;
    int s=0;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!=0;i++){
        count++;
    }
    return count;
}


int main(){
    char name[10];
    cout<<"Enter your name: ";
    cin>>name;

    cout<<endl<<"Your name is: "<<name<<endl;
    int len=getLength(name);
    cout<<"Length: "<<len<<endl;

    reverse(name,len);
    cout<<endl<<"Your name is: "<<name<<endl;

    cout<<"CHAR is-> "<<toLowerCase('b')<<endl;
    cout<<"CHAR is-> "<<toLowerCase('C')<<endl;


    if(palindrome(name,len)){
        cout<<"The given string is a palindrome"<<endl;

    }
    else{
        cout<<"The given string is not a palindrome"<<endl;
    }


    return 0;
}