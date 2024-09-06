#include<iostream>
using namespace std;

int exponent(int a, int b){
    //base case
    if(b==0){
        return 1;
    }

    if(b==1){
        return a;
    }
    int ans=exponent(a, b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int  main(){
    int a=3;
    int b=4;

    int result=exponent(a,b);
    cout<<result<<endl;
    return 0;

}