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

Node* ReverseLinkedList(Node* prev,Node* curr){
   
    if(curr==NULL){
        return prev;
    }
    
    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    
   return ReverseLinkedList(prev,curr);
}

void printLinkedList(Node* head){
    
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<< "->" ;
        temp = temp->next;
    }
}


Node* Add(Node* head1, Node* head2){
    
    Node* temp1 = ReverseLinkedList(NULL, head1);
    
    //printLinkedList(temp1);
    Node* temp2 = ReverseLinkedList(NULL,head2);
    
    //printLinkedList(temp2);
    
    Node* temp3 = new Node(0);
    Node* head3 = temp3;
    int carry = 0,sum=0,digit=0;
    
    while(temp1!=NULL && temp2!=NULL){
        sum = temp1->data + temp2->data + carry;
        digit = sum%10;
        carry = sum/10;
        
        temp3-> data = digit;
        
        //cout <<"temp3 :  "<<temp3->data << "=" << temp1->data << "+ "<< temp2->data << endl;;
        temp3 -> next = new Node(0);
        temp3 = temp3->next;
        
        temp1 = temp1 ->next;
        temp2 = temp2 ->next;
    }
    
    while(temp1!=NULL){
        
        temp3-> data = temp1->data;
        
        temp3 -> next = new Node(0);
        temp3 = temp3->next;
        temp1 = temp1 ->next;
    }
    
    while(temp2!=NULL){
        
        temp3-> data = temp1->data;
        
        temp3 -> next = new Node(0);
        temp3 = temp3->next;
        temp2 = temp2 ->next;
    }
    
   //delete temp3;
    //printLinkedList(head3);
    
    head3 = ReverseLinkedList(NULL, head3);
    return head3;
}

//Node* Sort(Node* head){
//    
//    Node* temp = head;
//    
//    while(temp->next!=NULL){
//        if(temp->data > temp ->next->data){
//            swap(temp->data,temp ->next->data);
//        }
//        
//        temp =  temp->next;
//    }
//    return head;
//}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(1);
    Node* n4 = new Node(3);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    
    Node* m1 = new Node(0);
    Node* m2 = new Node(2);
    Node* m3 = new Node(1);
    
    m1->next = m2;
    m2->next = m3;
    m3->next = NULL;
    
//    Node* r = ReverseLinkedList(NULL,n1);
//    Node* s = Sort(n1);
    Node* a = Add(n1,m1);
    printLinkedList(a);
    return 0;
}
