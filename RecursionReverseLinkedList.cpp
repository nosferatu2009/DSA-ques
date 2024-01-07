#include <iostream>
using namespace std;


class Node{
    public :
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
}

Node* ReverseLinkedList(Node* prev,Node* curr){
   
    if(curr==NULL){
        return prev;
    }
    
    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    
    ReverseLinkedList(prev,curr);
}


void printLinkedList(Node* head){
    
    Node* temp = head;
    while(temp!=null){
        cout<< temp->data<< "->" ;
    }
}


int main() {
  
    Node n1 = new Node(10);
    Node n2 = new Node(20);
    Node n3 = new Node(30);
    
    n1->next = n2;
    n2->next = n3;
    
    Node* r = ReverseLinkedList(NULL,n1);
    printLinkedList(r);
    
  return 0;
}
