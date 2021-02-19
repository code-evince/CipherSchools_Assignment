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

void RemoveDups(Node *head){
  Node *curr = head;
  while(curr!=NULL && curr->next!=NULL){
    if(curr->data == curr->next->data){
      Node *temp = curr->next;
      curr->next = curr->next->next;
      delete(temp);
    }
    else
      curr = curr->next;
  }
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<"-> ";
        curr = curr->next;
    }

}

void rPrint(Node *head){
    if(head==NULL)
        return;
    cout<<(head->data)<<"-> ";
    rPrint(head->next);
}


int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head ->next->next->next = new Node(40);
    head ->next->next->next-next = new Node(40);  //duplicate
  //  printList(head);
    rPrint(head);
    RemoveDups(head);
    rPrint(head);
    return 0;

};
