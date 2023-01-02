#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//user defined datatype creation
struct Node{
    int data;
    struct Node *next;
};

//node creation
struct Node* create(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->next = NULL;
    return n;
}
//linked list traversal
void traverse(struct Node* head){
    while(head!= NULL){
        printf("%d ",head->data);
        head = head->next;
    }
}

//insertion

//insertion at first
struct Node* iFirst(struct Node*head,int val){
    struct Node* r = create(val);
    r->next = head;
    return r;
}

//insertion in between
struct Node* iBetween(struct Node*head,int val,int index){
    struct Node* p = create(val);
    struct Node* q = head;
    int i = 0;
    while(i!=index-1){
        q = q->next;
        i++;
    }
    p->next = q->next;
    q->next = p;
    return head;
}

//insertion at the end
struct Node* iEnd(struct Node*head,int val){
    struct Node* ptr = create(val);
    struct Node* q = head;
    while(q->next != NULL){
        q = ptr->next;
    }
    q->next = ptr;
    ptr->next = NULL;
    return head;
    
}

//insertion after a given node
struct Node* iGiven(struct Node*head,struct Node*prev,int data){
    struct Node* ptr = create(data);
    ptr = prev->next;
    ptr->next = (prev->next)->next;
    return head;
}

int main(){
    struct Node *head = create(5);
    struct Node* second = create(14);
    struct Node* third = create(26);
    struct Node* forth =create(31);
    struct Node* fifth = create(40);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth; 
    fifth->next = NULL;
    // traverse(head);
    // printf(" \n ");
    // head = iFirst(head,3);
    // traverse(head);
    // head = iBetween(head,22,3);
    // printf(" \n" );
    // traverse(head);
    // printf("\n");
    head = iEnd(head,45);
    traverse(head);
    // printf("\n");
    // head = iGiven(head,third,29);
    // traverse(head);

return 0;


}