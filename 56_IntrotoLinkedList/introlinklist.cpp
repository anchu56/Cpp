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


void InsertatTail(node* &head,int val){      // Insert at tail 
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void InsertatHead(node* &head,int val){    // Insert at the beginning of a list
     node* n=new node(val);
     n->next=head;
     head=n;
}

bool search(node* head,int key){  // Search whether a key is present or not
   node* temp=head;
   while(temp!=NULL){
    if(temp->data==key){
        return true;
    }
    else{
        temp=temp->next;
    }
   }
   return false;
}



void Display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<< " -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}


int main(){
    node* head=NULL;
    InsertatTail(head,1);
    InsertatTail(head,2);
    InsertatTail(head,3);
    Display(head);
    InsertatHead(head,5);
    Display(head);
    cout<<search(head,2)<<endl;;
    return 0;
}