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

void AddAtTail(node* &head,int val){

    node* n= new node(val);
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

void MakeCycle(node* head,int loc){
    int count=1;
    node* temp= head;
    node* cyclenode=head;
    while(count<loc){
        temp=temp->next;
        cyclenode=temp;
        count++;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=cyclenode;
}

bool DetectCycle(node* head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
            return true;
        }
    }
    return false;

}

void RemoveCycle(node* head){
    node* slow=head;
    node* fast=head;
    do{
        fast=fast->next->next;
        slow=slow->next;
    } while(slow!=fast);
    fast=head;
    while(fast->next != slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}







void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"->NULL \n";
}



int main(){
    node* head=NULL;
    AddAtTail(head,1);
    AddAtTail(head,2);
    AddAtTail(head,3);
    AddAtTail(head,4);
    AddAtTail(head,5);
    AddAtTail(head,6);
    AddAtTail(head,7);
    MakeCycle(head,3);
    // display(head);
   if(DetectCycle(head)){
    cout<<"Cycle is present \n";
   }
   else{
    cout<<"Cycle is not present \n";
   }

   RemoveCycle(head);
   if(DetectCycle(head)){
    cout<<"Cycle is present after removal \n";
   }
   else{
    cout<<"Cycle is not present after removal \n";
   }
   display(head);
    return 0;
}