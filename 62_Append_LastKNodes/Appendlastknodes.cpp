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

int findLength(node* head){
        int count=0;
        node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
}


void appendlastk(node* &head,int k){
    int length = findLength(head);
    node* newhead;
    node* newtail;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL){
        if(count== length-k){
            newtail=tail;
        }
        if(count==length-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    head=newhead;
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
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    display(head);
    appendlastk(head,3);
    display(head);
    return 0;
}