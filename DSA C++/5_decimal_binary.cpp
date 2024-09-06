#include<iostream>
#include<math.h>
using namespace std;

//decimal to binary

int main()
{
    int n; 
    cin>>n;
    int answer=0;
    int i=0;
    while(n!=0)
    {
        int bit;
        bit=n&1;
        answer=(bit*pow(10,i)+answer);
        n=n>>1;
        i++;
        
    }
    cout<<answer<<endl;
}



//negative number to binary
/*
int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        n=-n;
    }
    int answer=0;
    int i=0;
    while(n!=0)
    {
        int bit=(n&1);
        answer=(bit*pow(10,i)+answer);
        n=n>>1;
        i++;
    }
    cout<<answer<<endl;
}
*/

//binary to decimal
/*
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int digit=(n%10);
        if(digit==1)
        {
            ans=ans+(digit*pow(2,i)) ; 
        }
        n=n/10;
        i++;
        
    }
    cout<<ans<<endl;
}*/