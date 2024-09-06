#include<iostream>
using namespace std;

//POWER OF a,b

/*
int power(int a, int b)
{
    int ans=1;
    for(int i=1; i<=b; i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int answer= power(a,b);
    cout<<answer;
    
    return 0;

}
*/


//EVEN ODD PROGRAM
/*
bool isEven(int a)
//1->even
//0->odd
{
    if(a&1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cin>>num;

if (isEven(num))
    {
        cout<<"Number is Even"<<endl;
    }
    else
    {
        cout<<"Number is Odd"<<endl;
    }
    return 0;
}
*/


//nCr of a number

/*
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int numerator=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return numerator/denom;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"Answer is: "<<nCr(n,r)<<endl;
    return 0;
}
*/

//printing count function
/*
int printcounting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
        
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;

    printcounting(n);
    return 0;
}
*/

//PRIME NUMBER

// 0->not a prime no.
// 1->prime

/*
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}

*/

//ARITHMETIC PROGRESSION FUCNTION CALL

//AP=3*n+7
/*
int ArithmeticProgression(int n)
{
    int ans=(3*n)+7;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int result=ArithmeticProgression(n);
    cout<<"AP of the number is: "<<result;
    return 0;
}
*/

//NUMBER OF SET BITS
/*
int countSetBits(int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int i;
    cin>>i;
    cout << countSetBits(i);
    return 0;
}
*/

//FIBONACCI SERIES

int Fibonnaci(int n)
{
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;;
    for(int i =1;i<=n;i++)
    {
        int next=a+b;
        cout<<next<<endl;
        a=b;
        b=next;
    }
    return 0;
    
}

int main()
{
    int n;
    cin>>n;
    int answer=Fibonnaci(n);
    cout<<answer;
    return 0;
}


