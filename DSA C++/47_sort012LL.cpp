#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


//APPROACH 1
Node* sortLL(Node* head){
    int zero_cnt=0;
    int one_cnt=0;
    int two_cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==1){
            one_cnt++;
        }
        else if(temp->data==2){
            two_cnt++;
        }
        else{
            zero_cnt++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zero_cnt!=0){
            temp->data=0;
            zero_cnt--;
        }
        else if(one_cnt!=0){
            temp->data=1;
            one_cnt--;
        }
        else if(two_cnt!=0){
            temp->data=2;
            two_cnt--;
        }
        temp=temp->next;     
    }
    return head;
}


//APPROACH 2

void insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node* head){
    Node* zerohead= new Node(-1);
    Node* onehead= new Node(-1);
    Node* twohead= new Node(-1);
    Node* zerotail=zerohead;
    Node* onetail=onehead;
    Node* twotail=twohead;

    Node* curr=head;

    //seperate lists
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zerotail,curr);
        }
        else if(value==1){
            insertAtTail(onetail,curr);
        }
        else if(value==2){
            insertAtTail(twotail,curr);
        }
        curr=curr->next;
    }

    //merge lists
    // 1s list not empty
    if(onehead -> next != NULL) {
        zerotail -> next = onehead -> next;
    }
    else {
        //1s list -> empty
        zerotail -> next = twohead -> next;
    }
    
    onetail -> next = twohead -> next;
    twotail -> next = NULL;
    
	//setup head 
    head = zerohead -> next;
    
    //delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;

}