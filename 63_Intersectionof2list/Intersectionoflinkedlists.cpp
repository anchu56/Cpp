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

    void InsertatTail(node* &head,int val){
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

void intersect(node* head1,node* head2,int loc){
    int count=1;
    node* temp1=head1;
    node* temp2=head2;
    while(count<loc){
        temp1=temp1->next;
        count++;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int length(node* head){
    int l=1;
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

int findIntersectpoint(node* head1,node* head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int diff;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        diff = l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        diff=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(diff >0){
        ptr1=ptr1->next;
        diff--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;

}

void display(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL \n";
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    InsertatTail(head1,1);
    InsertatTail(head1,2);
    InsertatTail(head1,3);
    InsertatTail(head1,4);
    InsertatTail(head1,5);
    InsertatTail(head2,10);
    InsertatTail(head2,20);
    display(head1);
    display(head2);
    intersect(head1,head2,3);
    display(head2);
    cout<<findIntersectpoint(head1,head2);
    return 0;
}