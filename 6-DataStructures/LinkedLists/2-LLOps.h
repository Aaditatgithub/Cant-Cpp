#include<iostream>
#include"1-LLimplementation.h"
using namespace std;

//delete alternate nodes starting from the second node
void DeleteAlternateNodes(node* &head)
{
    node *ptr1 = head;
    while(ptr1 && ptr1->next){
        node *ptr2 = ptr1->next;
        ptr1->next = ptr2->next; 
        free(ptr2);
        ptr1 = ptr1->next;
    }
    cout<<endl;
    head->Traverse(head);
}

//print data of linkedlist in reverse manner
void reverse_print(node* &head){
    
    if(head == NULL)
        return;
    reverse_print(head->next);
    cout<< head->data << " ";
}

void reverse(node* &head){

    node *prev, *current, *next;
    prev = NULL;
    current = head;
     
    while(current){
        next = current->next;
        current->next = NULL;
        prev = current;
        current = next;
    }
    head = prev;
}

//reverse the subsections given by k, n-k
node* reverse_KLL(node *&head, int k){

    node* prev = NULL;
    node* current = head;
    node* next = current->next;

    int counter = 0;
    while(current && counter<k){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        counter++;
    }
    if(current){
        node* newhead = reverse_KLL(current,k);
        head->next = newhead;
    }
    
    return prev;
}

