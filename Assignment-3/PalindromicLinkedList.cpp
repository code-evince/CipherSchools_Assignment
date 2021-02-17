#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node *next;
    Node(char x)  //constructor of struct Node
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

bool isPalindrome(Node *head){
    if(head==NULL) return true;
    Node *slow = head, *fast = head;
    while(fast->next!=NULL and fast->next->next!=NULL){   //this is just to make the
        slow = slow->next;                                  //slow ptr reach the middle
        fast = fast->next->next;                        //both in case of even and odd lenth string
    }

    Node *rev = revList(slow->next);     //reverse the second half and rev now points to the head of the second half


    Node *curr = head;      // compare for palindrome
    while(rev!=NULL){
        if(rev->data !=curr->data)
            return false;
        rev=rev->next;
        curr=curr->next;
    }
    return true;
}



int main(){
    Node *head = new Node('R');
    head->next= new Node('A');
    head->next->next = new Node('D');
    head ->next->next->next = new Node('A');
    head ->next->next->next->next = new Node('R');
   printList(head);
   cout<<endl;
   if(isPalindrome(head)){
       cout<<"is a Palindrome";

   }
   else{
       cout<<"not a Palindrome";
   }


    return 0;

};
