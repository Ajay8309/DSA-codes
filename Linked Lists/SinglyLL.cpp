#include<bits/stdc++.h>
using namespace std;

class Node{ 
    public:
      int data;
      Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }  

    ~Node(){
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};

void insertAtHead(Node* &head, int d){
    // create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    }

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}      

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    if(position == 1){
        insertAtHead(head, d);
        return ;
    }
    // create new node
    Node* temp = new Node(d);
    int cnt = 1;

    Node* prev = NULL;
    Node* curr = head;
    while(cnt < position){
      prev = curr;
      curr = curr -> next;
      cnt++;
    }

    prev -> next = temp;
    temp -> next = curr;
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
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }else{

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt < position){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    
    if(curr -> next == NULL){
        tail = prev;
        prev -> next = NULL;

    }

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
  insertAtHead(head, 20);
  print(head);
  insertAtTail(tail, 50);
  print(head);
  insertAtPosition(head, tail, 1, 100);
  print(head);
  deletePosition(head,tail,4);
  print(head);


}