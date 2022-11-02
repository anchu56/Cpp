#include <iostream>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;

    node(int val){
        prev=NULL;
        data=val;
        next=NULL;
    }
};

void inseratHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    
    head=n;
}

void insertatTail(node* &head,int val){
    if(head==NULL){
        inseratHead(head,val);
        return;
    }
    node* n= new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deleteAthead(node* &head){
    node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
}

void deletion(node* &head,int loc){
    if(loc==1){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count<loc){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;
    }
    delete temp;
}



void display(node* head){
    node* temp=head;
        while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
}


int main(){
    
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    inseratHead(head,8);
    display(head);
    deletion(head,3);
    deletion(head,1);
    display(head);
    return 0;
}