#include<iostream>
using namespace std;

//INTRODUCTION
//SINGLY LINKED LIST

class Node{
    public:
    int data;
    Node* next;

    //CONSTRUCTOR
    Node(int data){
        this-> data=data;
        this->next=NULL;
    }

    //DESTRUCTOR
    ~Node(){
        int value=this->data;

        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data: "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int data){

    //new node create
    Node* temp= new Node(data);
    temp-> next=head;
    head=temp;
}
void InsertAtTailNode(Node* &tail, int data){
    //new node craete
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp ;
}

void print(Node* &head){
     Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtPosition(Node* &tail, Node* &head,int pos, int data){

    // insert at head
    if(pos==1){
        InsertAtHead(head,data);
        return;
    }

    Node* temp=head;
    int cnt=1;

    //inserting at last position
    if(temp->next==NULL){
        InsertAtTailNode(tail,data);
        return;
    }

    //traversing to n-1 position
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    
    //creating a new node
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int pos, Node* &head){

    //deleting first or start node
    if(pos==1){
        Node* temp=head;
        head=head->next;
        //memory free
        delete temp;
        return;
    }
    else{
        //deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int checkifPresent(Node* head, int desiredElement) {
    Node* temp = head;

    // Traverse the linked list
    while (temp != nullptr) {
        // Check if the current node's data is equal to the desired element
        if (temp->data == desiredElement)
            return 1;  // Return 1 if the element is found

        // Move to the next node
        temp = temp->next;
    }

    return 0;  // Return 0 if the element is not found in the linked list
}

int main(){

    //create a new node
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to Node1
    Node* head=node1;
    print(head);

    //tail pointer to Node 1
    Node* tail=node1;
    InsertAtTailNode(tail,12);
    
    InsertAtHead(head,15);
    print(head);

    InsertAtHead(head,20);
    print(head);

    InsertAtPosition(tail,head,3,22);
    print(head);

    InsertAtPosition(tail,head,1,17);
    print(head);

    InsertAtPosition(tail,head,7,19);
    print(head);

    cout<<endl;

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deleteNode(4,head);
    cout<<endl;
    print(head);

    



    return 0;
}