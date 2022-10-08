// Singly linked list

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
    if(head == NULL){
        // create a new node
        Node* temp = new Node(d);
        head = temp;
        return ;
    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

void inserAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return ;
    }

    Node* temp = new Node(d);
    int cnt = 1;
    Node* curr = head;
    while(cnt < pos-1){
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL){
        inserAtTail(tail, d);
        return ;
    }

    temp -> next = curr -> next;
    curr -> next = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}




void sortSwap(Node* &head ) {
   Node* curr = head, *temp = NULL;
    int t;
    if (head == NULL) {
        return;
    }else {
        while (curr != NULL) {
            temp = curr->next;
            while (temp != NULL) {
            if (curr->data > temp->data) {
                t = curr->data;
                curr->data = temp->data;
                temp->data = t;
            }
            temp = temp->next;
        }
        curr = curr->next;
        }
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* prev = NULL;
        Node* curr = head;

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

// void detectLoop(Node* &head){
//     Node* fast = head;
//     Node* slow = head;

//     while(slow != NULL && fast != NULL){
//         fast = fast -> next;
//         if(fast != NULL){
//             fast = fast -> next;
//         }
//         slow = slow -> next;

//         if(slow == fast){   
//            slow = head;
//            while(slow != fast){
//             slow = slow -> next;
//             fast = fast -> next;
//            }
//            if(fast == slow){
//             // cout << "Loop present at" << " " << fast -> data;
//             Node* temp = slow;
//             while(temp -> next != slow){
//                 temp = temp -> next;
//             }
//             temp -> next = NULL;
//             return ;
//            }
//         //    cout << "Hello";
//         }
//     }

//     cout << "No loop";
   
// }


void RemoveDuplicate(Node* &head){
      Node* curr = head;

    while(curr != NULL){
        if(curr -> next != NULL && curr -> data == curr -> next -> data){
            Node* temp = curr;
            temp = curr -> next -> next;
            Node* deleteNode = curr -> next;
            delete deleteNode;
            curr -> next = temp;
        }else{
            curr = curr -> next;
        }
    }
}

void palindrome(Node* &head){
     Node* temp = head;
       int v[100];
       int i = 0;
       while(temp != NULL){
           v[i] = (temp -> data);
           temp = temp -> next;
           i++;
       } 
        
        int s = 0, e = i-1, m = (s+e)/2;
        
        while(s <= e){
            if(v[s] == v[e]){
                s++;
                e--;
            }else{
                cout << "No palindrome";
                return ;
            }
        }
        
        cout << "Palindrome";
}

void detectLoop(Node* &head){
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow){
            slow = head;
            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }

            if(slow == fast){
                // cout << "Loop head at" << slow -> data;
                Node* temp = slow;
                while(temp -> next != slow){
                    temp = temp -> next;
                }
                temp -> next = NULL;
                return ;
            }
        }
    }
        
    
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    // insertAtHead(head, 4);
    // print(head);
    inserAtTail(tail, 2);
    inserAtTail(tail, 2);
    inserAtTail(tail, 1);
    // palindrome(head);
    inserAtTail(tail, 3);
    inserAtTail(tail, 4);
    inserAtTail(tail, 5);
    tail -> next = head -> next;
    detectLoop(head);
        print(head);
    // sortSwap(head);
    // RemoveDuplicate(head);
    // print(head);

    // tail -> next = head -> next -> next;
    // detectLoop(head);
    // cout << head -> data << " " << tail -> data;
    // insertAtPosition(head, tail, 2, 8);
    // insertAtPosition(head, tail, 1, 10);
    // print(head);
    // deleteNode(head, tail, 3);
    // sortSwap(head);
    // print(head);

}


// Doubly Linked Lists

// class Node{
//     public:
//      int data;
//      Node* next;
//      Node* prev;

//      Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//         this -> prev = NULL;
//      }

//      ~Node(){
//          int value = this->data;
//         if(this->next != NULL) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//      }
// };


// void insertAtHead(Node* &head, int d){

//     if(head == NULL){
//      Node* temp = new Node(d);
//      head = temp;
//      return ;
//     }
//     // create new node
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head -> prev = temp -> next;
//     head = temp;
// }

// void insertAtTail(Node* tail, int d){

//     if(tail == NULL){
//      Node* temp = new Node(d);
//      tail = temp;
//      return ;
//     }

//     Node* temp = new Node(d);
//     tail -> next = temp;
//     temp -> prev = tail -> next;
//     tail = temp;
// }

// void deleteNode(Node* &head, Node* &tail, int position){
   
//    if(position == 1) {
//         Node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp ->next;
//         temp -> next = NULL;
//         delete temp;
//     }
//     else
//     {
//         //deleting any middle node or last node
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < position) {
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }

//         curr -> prev = NULL;
//         prev -> next = curr -> next;
//         curr -> next = NULL;

//         delete curr;
//     }

// }

// void print(Node* &head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }


// int main(){
//    Node* node1 = new Node(5);
//    Node* head = node1;
//    Node* tail = node1;
//    insertAtHead(head, 4);
//    print(head);
//    insertAtHead(head, 6);
//    print(head);
//    insertAtTail(tail, 8);
//    print(head);
//    deleteNode(head, tail, 3);
//    print(head);

// }





















   



