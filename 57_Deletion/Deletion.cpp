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
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deleteAtHead(node* &head){            //  Handles corner case
    node* todelete= head;
    head=head->next;
    delete todelete;
}

void deletenode(node* &head,int val){
    if(head==NULL){         // Corner case if no elements are present
        return;
    }
    
    if(head->next==NULL){         // Corner case if only 1 node is present
        deleteAtHead(head);
        return; 
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;    // Deletes the memory 
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
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    deletenode(head,2);
    deleteAtHead(head);
    display(head);
    return 0;

}