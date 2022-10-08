


void RevserseK(Node* &head, int k){

    if(head == NULL){
        return NULL;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd;
    int cnt = 1;
    while(curr -> next = NULL && cnt < k){
        fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
        cnt++
    }

    if(next != NULL){
        RevserseK(fwd, k);
    }

    return prev;


}