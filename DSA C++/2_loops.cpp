#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    //cout << "Hello"<<n<<endl;
    //*****POSITIVE OR NEGATIVE INTEGER/////

    // if(n>0)
    // {
    //     cout<< n << " is Positive"<<endl;
    // }
    // else
    // {
    //     cout<< n<< " is Negative"<<endl;
    // }

    //*****POSITIVE, NEGATIVE or ZERO*****

    // if(n>0)
    // {
    //     cout<< n <<" is Postive"<<endl;
    // }
    // else if (n<0)
    // {
    //     cout<< n << " is negative"<< endl;
    // }
    // else
    // {
    //     cout<< n << " is zero"<<endl;
    // }

    // int a,b;
    // // cin>> a>>b;
    // a= cin.get(); //considers as a char hence ascii value is printed
    // // cout<<"Value of A: "<< a <<" Value of B: "<<b<<endl;
    // cout<<"Value of A: "<< a <<endl;

    //******Lowercase, Uppercase, Numeric******

    /*
    char n;
    cin>>n;
    if(n>='a' && n<='z')
    {
        cout<<"This is a lowercase string"<<endl;
    }
    else if(n>='A' && n<='Z')
    {
        cout<<"This is a uppercase string"<<endl;
    }
    else if(n>='0' && n<='9')
    {
        cout<<"This is a numeric value"<<endl;
    }
    return 0;
    */    

    /*****WHILE LOOP*****/
    /****PRINT NUMBER FROM 1 TO N****/
    /*
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i=i+1;
    }
    */
   /****Print sum of numbers from 1 to N****/

/*
    int n;
    
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<endl;
    */


   /*****Print the sum  of even numbers*****/
   /*int n;
    
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum<<endl;
    */


   /*FAHRENHEIT TO CELCIUS*/
   /*
   int f;
   cin>>f;
   int c;
   c=5/9*(f-32);
   cout<< c<<endl;
    */

   /****prime or not****/
   int n;
   cin>>n;
   int i=2;
   while(i<n)
   {
        if(n%i==0)
        {
            cout<<"Not a Prime Number"<<endl;
            return 0;
        }
        i=i+1;
    }
    cout<<"Prime"<<endl;
    return 0;

    
    
}

