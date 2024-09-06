#include<iostream>
#include<stack>
using namespace std;


//Using Linked List

struct stackNode {
  int data;
  stackNode * next;
  int size;
  stackNode(int d) {
    data = d;
    next = NULL;
  }
};
struct stacks {
  stackNode * top;
  int size;
  stacks() {
    top = NULL;
    size = 0;
  }
  void stackPush(int x) {
    stackNode * element = new stackNode(x);
    element -> next = top;
    top = element;
    cout << "Element pushed" << "\n";
    size++;
  }
  int stackPop() {
    if (top == NULL) {
      return -1;
    }
    int topData = top -> data;
    stackNode * temp = top;
    top = top -> next;
    delete temp;
    size--;
    return topData;
  }
  int stackSize() {
    return size;
  }
  bool stackIsEmpty() {
    return top == NULL;
  }
  int stackPeek() {
    if (top == NULL) return -1;
    return top -> data;
  }
  void printStack() {
    stackNode * current = top;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
  }
};













//using Array
/*
class Stack{
    //properties
    public:
    int top;
    int *arr;
    int size;
    //behavior
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //push operation
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    //pop operation
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    
};
*/

int main(){

    
    stacks s;
    s.stackPush(10);
    cout << "Element popped: " << s.stackPop() << "\n";
    cout << "Stack size: " << s.stackSize() << "\n";
    cout <<"Stack empty or not? "<<s.stackIsEmpty()<<"\n";
    cout << "stack's top element: " << s.stackPeek() << "\n";





    //USING ARRAY
    /*
    Stack st(5);
    st.push(15);
    st.push(22);
    st.push(9);
    st.push(37);
    st.push(77);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    */




    /*
    //creation of stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout<<"Printing the top element: "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stakc is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is: "<<s.size()<<endl;
    */

    return 0;

}