#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }  

     ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
    
};


int getLength(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        temp = temp -> next;
        cnt++;
    }

    return cnt;
}


void insertAtHead(Node* &head, int d){
    // create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp -> next;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return ;
    }
    Node* previous = NULL;
    Node* curr = head;
    int cnt = 1;
    while(cnt < position){
        previous = curr;
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL){
        insertAtTail(tail, d);
        return ;
    }

    Node* temp = new Node(d);
    previous -> next = temp;
    temp -> prev = previous -> next;

    temp -> next = curr;
    curr -> prev = temp -> next;


}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}


void deletePosition(Node* &head, Node* &tail, int position){
   
   if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }

}

int main(){
   Node* node1 = new Node(10);

   Node* head = node1;
   Node* tail = node1;
   print(head);
//    cout << getLength(head);
   insertAtHead(head, 20);
//    print(head);
   insertAtHead(head, 30);
   print(head);
   insertAtTail(tail, 0);
   print(head);
   insertAtTail(tail, 10);
   print(head);
   insertAtPosition(head, tail, 3, 70);
   print(head);
   deletePosition(head, tail, 1);
   print(head);
   cout << head -> data << endl;
   cout << tail -> data;

}