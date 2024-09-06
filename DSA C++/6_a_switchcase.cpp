#include <iostream>
using namespace std;

int main()
{
    //int num;
    //cin>>num;
    char ch;
    cin>>ch;
    cout<<endl;
    
    /*
    switch(num)
    {
        case 1: cout<<"first"<<endl;
                 break;
        case 2: cout<<"second"<<endl;
                break;
        default: cout<<"This is default"<<endl;
    }
    */

    
    
     switch(ch)
     {
         case 1: cout<<"first"<<endl;
                 break;
         case 'a': cout<<"character one"<<endl;
                 break;
         default: cout<<"This is default"<<endl;
     }
     cout<<endl;
    

    // MINI CALCULATOR

    /*
        int a;
        cout << "Enter the value of a: " << endl;
        cin >> a;
        int b;
        cout << "Enter the value of b: " << endl;
        cin >> b;
        char op;
        cout << "Enter the value of operator: " << endl;
        cin >> op;
        switch (op)
        {
        case '+':
            cout << "sum of the digits is: " << a + b << endl;
            break;
        case '-':
            cout << "subtraction of the digits is: " << a - b << endl;
            break;
        case '*':
            cout << "multiplication of the digits is: " << a * b << endl;
            break;
        case '/':
            cout << "division of the digits is: " << a / b << endl;
            break;
        default:
            cout << "invalid output";
        }
        cout << endl;
    */

    // DENOMINATION OF SUM PROBLEM

    /*
    int amount;
    cout<<"Enter your amount: "<<endl;
    cin>>amount;
    int hundred=0, fifty=0, twenty=0, ten=0, one=0;
    if(amount<0)
    {
        cout<<"Invalis amount"<<endl;
        return 1;
    }
    while(amount>=100)
    {
        amount=amount-100;
        hundred++;
    }
    while(amount>=50)
    {
        amount=amount-50;
        fifty++;
    }
    while(amount>=20)
    {
        amount=amount-20;
        twenty++;
    }
    while(amount>=10)
    {
        amount=amount-10;
        ten++;
    }
    while(amount>=1)
    {
        amount=amount-1;
        one++;
    }

    cout<<"Number of 100 notes are: "<<hundred<<endl;
    cout<<"Number of 50 notes are: "<<fifty<<endl;
    cout<<"Number of 20 notes are: "<<twenty<<endl;
    cout<<"Number of 10 notes are: "<<ten<<endl;
    cout<<"Number of 1 notes are: "<<one<<endl;
*/

}