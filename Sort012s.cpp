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
};

Node* Sort(Node* head){
    
    Node* temp = head;
    
    while(temp->next!=NULL){
        if(temp->data > temp ->next->data){
            swap(temp->data,temp ->next->data);
        }
        
        temp =  temp->next;
    }
    return head;
}


//Node* ReverseLinkedList(Node* prev,Node* curr){
//   
//    if(curr==NULL){
//        return prev;
//    }
//    
//    Node* temp = curr->next;
//    curr->next = prev;
//    prev = curr;
//    curr = temp;
//    
//   return ReverseLinkedList(prev,curr);
//}


void printLinkedList(Node* head){
    
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<< "->" ;
        temp = temp->next;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Node* n1 = new Node(0);
    Node* n2 = new Node(2);
    Node* n3 = new Node(1);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    
//    Node* r = ReverseLinkedList(NULL,n1);
    Node* s = Sort(n1);
    printLinkedList(s);
    return 0;
}
