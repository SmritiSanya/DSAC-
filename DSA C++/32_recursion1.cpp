#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
        return;
    }

    //recursive relation
    print(n-1);

    cout<<n<<endl;
}

int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    //int smallerproblem=power(n-1);
    //int bigger=2*smallerproblem;

    return 2 * power(n-1);
}

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans=factorial(n);

    cout<<ans<<endl;
    print(n);

    return 0;
}