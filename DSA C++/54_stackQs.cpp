#include<bits/stdc++.h>
using namespace std;


//REVERSING THE STRING IN STACK
/*
int main(){
    string str="smriti";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();

    }
    cout<<"answer is: "<<ans<<endl;
    return 0;

}
*/


//Delete the middle element from stack-RECURSION

/*
void deletemid(stack<char>&s,int sizeofStack, int current){
    if(current==sizeofStack/2){
        s.pop();
        return;
    }

    int x=s.top();
    s.pop();
    current+=1;
    deletemid(s,sizeofStack,current);

    s.push(x);
}

void delete_Middle(stack<char>&s,int size){
    deletemid(s,size,0);
}

int main(){
    stack<char> st;
 
    //push elements into the stack
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');
 
    delete_Middle(st, st.size());
 
    // Printing stack after deletion
    // of middle.
    while (!st.empty())
    {
        char p=st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;

    
}

*/



//VALID PARANTHESIS

/*
bool isValid(string s) {
        stack<char>st; 
        for(auto it: s) {
            if(it=='(' || it=='{' || it == '[') st.push(it); 
            else {
                if(st.size() == 0) return false; 
                char ch = st.top(); 
                st.pop(); 
                if((it == ')' and ch == '(') or  (it == ']' and ch == '[') or (it == '}' and ch == '{')) continue;
                else return false;
        }
    }
}
*/


//Insert an element at its bottom in a Stack
/*
stack<int> recur(stack<int> s, int n){
    stack<int>temp;
    //base case
    if(s.empty()){
        s.push(n);
    }
    else{
        int x=s.top();
        s.pop();

        s=recur(s,n);
        s.push(x);
    }
    return s;
}
*/

//REVERSE STACK USING RECURSION


/*

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int>& st, int item) {
    if (st.empty()) {
        st.push(item);
    } else {
        int temp = st.top();
        st.pop();
        insertAtBottom(st, item);
        st.push(temp);
    }
}

// Function to reverse the stack using recursion
void reverseStack(stack<int>& st) {
    if (!st.empty()) {
        int temp = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st, temp);
    }
}
*/



//SORT A STACK

/*
void sortedInsert(stack<int>s,int x){
    if(s.empty()||x>s.top()){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    sortedInsert(s,x);

    s.push(temp);

}

void sortStack(stack<int>s){
    int x=s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s,x);

}
*/


//Question: Redundant Bracket


/*
bool checkRedundancy(string& str){
    //create stack
    stack<char> st;

    //iterate thorugh the given expression
    for(auto& ch: str){

        //if current character is close parathensis
        if(ch==')'){
            char top1=st.top();
            st.pop();

            // If immediate pop have open parenthesis '('
            // duplicate brackets found
            bool flag=true;

            while(!st.empty() && top1!='('){
                // Check for operators in expression
                if(top1=='+'|| top1=='-'|| top1=='*' ||top1=='/'){
                    flag=false;
                }
                // Fetch top element of stack
                top1=st.top();
                st.pop();
            }
            if(flag==true){
                return true;
            }
        }
        else{
            st.push(ch);// push open parenthesis '(',
                  // operators and operands to stack
        }
    }
    return false;
}
*/


//Q: min cost to make string valid

/*
//iterative
int minAddToMakeValid(string s) {
        int ans=0;
        int bal=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                bal+=1;
            }
            if(ch==')'){
                bal-=1;
            }
            if(bal==-1){
                ans+=1;
                bal=0;
            }
        }
        return ans+bal;
    }

    //stack
    int minParentheses(string p) {
    stack<char> stk;
    int ans = 0;

    for (char ch : p) {
        if (ch == '(') {
            stk.push(ch);  // Push opening parenthesis onto the stack
        } else if (ch == ')') {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();  // Pop the matching opening parenthesis from the stack
            } else {
                ans++;  // No matching opening parenthesis, so we need to add one
            }
        }
    }

    // Any remaining '(' in the stack need to be closed
    ans += stk.size();

    return ans;
}
*/



