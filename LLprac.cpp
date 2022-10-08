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
};

void insertAtHead(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;


}

void insertInTail(Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int d, int position){
    if(position == 1){
        insertAtHead(head, d);
        return ;
    }

    Node* curr = head;
    int cnt = 1;
    while(cnt < position-1){
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL){
        insertInTail(tail, d);
        return ;
    }

    Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;
    
}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }

    cout << endl;
}

void specefic(Node* &head, int pos){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL && cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }


    // cout << temp -> data;

       Node* curr = temp;
        
        do{
            curr = curr -> next;
            // cout << curr -> data << " ";
        }while(curr -> data != temp -> data && curr != NULL);


        cout << curr -> data << " " << temp -> data;
        if(temp -> data == curr -> data){
            cout << "Cycle present";
        }else{
            cout << "Not present:";
        }
        

}

int main(){

    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;

    insertInTail(tail, 6);
    insertInTail(tail, 7);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    // print(head);
    insertAtPosition(head, tail, 100, 3);
    insertAtPosition(head, tail, 300, 1);
    insertAtPosition(head, tail, 900, 8);
    tail -> next = head -> next;
    // print(head);
    // cout << endl;
    specefic(head, 2);
    // cout << endl;
    // print(head);
   

}