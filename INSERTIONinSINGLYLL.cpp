#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int data){
    Node*temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtMiddle(Node* &tail,Node* &head,int pos,int data){
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    Node*temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    //create new node to insert 
    Node*temp1=new Node(data);
    temp1->next=temp->next;
    temp->next=temp1;


}
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    Node*node1=new Node(11);
   // cout<<node1->data<<endl;
   // cout<<node1->next<<endl;
    Node*head=node1;
    Node*tail=node1;
    insertAtHead(head, 2);
    print(head);
    cout<<endl;
    insertAtHead(head, 4);
    print(head);
    cout<<endl;
    insertAtHead(head, 6);
    print(head);
    cout<<endl;
    insertAtTail(tail, 8);
    print(head);
    cout<<endl;
    insertAtTail(tail, 77);
    print(head);
    cout<<endl;
    insertAtHead(head, 67);
    print(head);
    cout<<endl;
    insertAtMiddle(tail,head,4,98);
    print(head);
    cout<<endl;

    // output is--- 67 6 4 98 2 11 8 77
}
   