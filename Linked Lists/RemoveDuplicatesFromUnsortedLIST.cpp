void SortNode(Node* &head){
    Node* prev = head;
    Node* curr = head -> next;
    Node* fwd ;
    Node* x = head;

    while(curr != NULL){
        if(prev -> data > curr -> data){
            fwd = curr -> next;
            curr -> next = prev;
            prev -> next = fwd;
            x -> next = curr;
            curr = fwd;
            x = x -> next;
        }else{
            curr = curr -> next;
            prev = prev -> next;
        }
    }
     
}

void RemoveDuplicate(Node* head){
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

    return head;
}