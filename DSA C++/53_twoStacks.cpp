#include<iostream>
using namespace std;

class twoStack{
    int *arr;
    int top1;
    int top2;
    int size;

    public:
    //INITIALIZE TWO STACK
    twoStack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }
    //Push in Stack 1
    void push1(int num){
        //atleast one empty space is present
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    //Push in stack 2
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    //Pop from stack1 and return popped element
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

     //Pop from stack2 and return popped element
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2--;
            return ans;
        }
        else{
            return -1;
        }
    }
};
