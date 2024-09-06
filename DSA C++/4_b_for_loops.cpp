#include<iostream>
using namespace std;

int main()
{
    //PRINTING NUMBERS FROM 1 TO N
    /*
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }


    //MULTIPLE VARIABLES AND CONDITIONS
    for(int a=1,b=2; a>=1 && b>=2; a--,b--)
    {
        cout<<a<<" "<<b<<endl;
    }


    */



    //SUM OF N NUMBERS
    /*
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    */

    //fibonacci series
    /*
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
        int next;
        next=a+b;
        cout<<next<<" ";
        
        a=b;
        b=next;
    }
    cout<<endl;
}

*/
//PRIME NUMBER
int n;
cin>>n;

for(int i=1; i<=n; i++)
{
    if(n%i==0)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a Prime";
    }
    break;
}
}