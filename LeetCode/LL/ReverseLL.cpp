

void Rverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd;

    while(curr != NULL){
        fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
    }

    return prev;
}

// using Recursion


int recusion(Node* head, Node* prev, Node* curr){
    if(head == NULL){
        head = prev;
        return ;
    }

    Node* fwd = curr -> next;
    recursion(head, curr, fwd);
    curr -> next = prev;
}

void Reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;

    recursion(head, prev, curr);
    return head;
}