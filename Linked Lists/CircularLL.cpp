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

int insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        // create new node 
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
   
    }else{

    Node* curr = tail;
    while(curr -> data != element){
        curr = curr -> next;
    }

            Node* temp = new Node(d);
            temp -> next = curr -> next;
            curr -> next = temp;

    }


}

void print(Node* &tail){
    Node* temp = tail;

    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    while(temp != tail);
    cout << endl;
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout << "There is no element inside the list :";
        return ;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main(){

   Node* tail = NULL;

   insertNode(tail, 5, 3);
    print(tail);

   insertNode(tail, 3, 5);
   print(tail);

   insertNode(tail, 5, 6);
   print(tail);

   deleteNode(tail,5);
   print(tail);
   
}