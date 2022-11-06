#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertatTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void evenAfterodd(node* head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=head->next;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
}



void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL \n";
}


int main(){
    node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    display(head);
    evenAfterodd(head);
    display(head);
    return 0;
}