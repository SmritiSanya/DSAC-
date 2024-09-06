#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <string> s;
    s.push("Smriti");
    s.push("Sanya");
    s.push("Thakur");

    cout<<"Top Element -> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element -> "<<s.top()<<endl;

    cout<<"Size of Stack: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;


}