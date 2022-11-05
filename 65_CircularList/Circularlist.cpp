#include <iostream>
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


void insertattail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        n->next=n;     // Making first node circular
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}

void insertathead(node* &head,int val){
    node* n = new node(val);
    node* temp=head;
    do{
        temp=temp->next;
    }
    while(temp->next!=head);
    temp->next=n;
    n->next=head;
    head=n;
}

void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;

}

void deletion(node* &head,int pos){

    if(pos==1){
        deleteathead(head);
        return;
    }
    int count=1;
    node* temp=head;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


void display(node* head){
    node* temp=head;

    // while(temp!=NULL){                        // Doing this will make a infinite loop
    //     cout<<temp->data<<"->";
    //     temp=temp->next;
    // }
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<"NULL \n";
}



int main(){

    node* head= NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertathead(head,8);
    insertathead(head,10);
    display(head);
    deletion(head,3);
    display(head);
    deletion(head,1);
    display(head);

    return 0;
}