#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)  //constructor of struct Node
    {
        data = x;
        next = NULL;

    }
};
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<"-> ";
        curr = curr->next;
    }
}

Node *revList(Node *head){
    Node *curr = head ;
    Node *prev = NULL;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
    }

    return prev;
}



int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head ->next->next->next = new Node(40);
   printList(head);
   cout<<endl;
   printList(revList(head));


    return 0;

};
