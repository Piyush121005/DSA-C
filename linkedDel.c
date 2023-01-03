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

//deletion at the beginning
struct Node* delFirst(struct Node* head){
    struct Node* p = head;
    head = head->next;
    free(p);
    return head;
}
//deleting a node in between
struct Node* delBtw(struct Node* head,int index){
    struct Node* ptr = head;
    struct Node* ptrnxt = head->next;
    int i = 1;
    while(ptrnxt->next!=NULL&&i!=index-1){
        ptr = ptr->next;
        ptrnxt = ptrnxt->next;
        i++;
    }
    ptr->next = ptrnxt->next;
    free(ptrnxt);
    return head;
}
//deleting the last node
struct Node* delLast(struct Node* head){
    struct Node* ptr = head;
    struct Node* q = head->next;
    while(q->next!=NULL){
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
}
//deleting the element with a given value
struct Node* delGivVal(struct Node*head,int val){
    struct Node* ptr = head;
    struct Node*q = head->next;
    while(q->data!=val){
        q = q->next;
        ptr = ptr->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
}
int main(){
    struct Node *head = create(25);
    struct Node* second = create(34);
    struct Node* third = create(56);
    struct Node* forth =create(71);
    struct Node* fifth = create(80);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL; 
    // head = delFirst(head);
    // traverse(head);
    head = delBtw(head,2);
    traverse(head);
    // head = delLast(head);
    // traverse(head);
    // head = delGivVal(head,71);
    // traverse(head);
return 0;


}