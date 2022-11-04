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


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL \n";
}



void mergesort(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummy = new node(-1);
    node* ptr3=dummy;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    cout<<"After merging the 2 lists \n";
    display(dummy->next);

}


int main(){
    int n1,n2;
    cout<<"Enter the size of list 1 \n";
    cin>>n1;
    int a[n1];
    cout<<"Enter the size of list 2 \n";
    cin>>n2;
    int b[n2];

    node* head1=NULL;
    node* head2=NULL;
    cout<<"Enter the elements of list1 \n";
    for(int i=0;i<n1;i++){
        cin>>a[i];
        insertattail(head1,a[i]);
    }
    cout<<"Enter the elements of list2 \n";
    for(int i=0;i<n2;i++){
        cin>>b[i];
        insertattail(head2,b[i]);
    }

    display(head1);
    display(head2);

    mergesort(head1,head2);


    return 0;
}