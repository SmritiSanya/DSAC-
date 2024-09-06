#include<iostream>
#include<cmath>
using namespace std;


//PALINDROME

/*
int palindrome(int num)
{
    int reverse=0;
    while(num!=0){
        int digit =num%10;
        reverse=(reverse*10)+digit;
        num=num/10;
    }
    return reverse;
}
int main()
{
    int num=12121;
    int result=palindrome(num);
    cout<<result<<endl;
    if(result==num){
        cout<<"is a palindrome";
    }
    else{
        cout<<"is not a palindrome";
    }
}
*/


//COUNT DIGITS and ARMSTRONG NUMBER
//ARMSTRONG NUMBERS
//num=123
//result=1^3+2^3+3^3

/*

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num = num / 10;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int digitCount = countDigits(num);
    int armstrongSum = 0;

    while (num != 0) {
        int digit = num % 10;
        armstrongSum += pow(digit, digitCount);
        num = num / 10;
    }

    return (armstrongSum == originalNum);
}

int main() {
    int num = 153;
    if (isArmstrong(num)) {
        cout << "It is an armstrong number";
    } else {
        cout << "Not an armstrong number";
    }
    return 0;
}

*/




//GCD OR HCF OF A NUMBER

/*
int hcf(int a, int b)
{
    
    while(a>0 && b>0){
        if(a> b){
            a=a%b;
        }
        else{
            b=b%a;
        }
        
    }
    if(a==0){
        return b;
    }
    return a;
   
}
int main()
{
    int num1=12;
    int num2=15;
    int result=hcf(num1,num2);
    cout<<result;
}
*/





//Print all divisors

void divisor(int num)
{
    int sqrtn=sqrt(num);
    for(int i=1;i<=sqrtn;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
        }
        if (i != num / i) {
                // Print the counterpart divisor
                cout << num / i <<endl; 
            }
    }
}


int main()
{
    int num=12;
    divisor(num);
    
}



