#include<iostream>
using namespace std;
int n=5;
void a(int i){
    cout<<"n in a: "<<n<<endl;
    n++;
}

void b(int i){
    cout<<"n in b: "<<n<<endl;
}

int main(){
    int i=50;
    a(i);
    b(i);
    cout<<"n in main: "<<n<<endl;
    return 0;
}