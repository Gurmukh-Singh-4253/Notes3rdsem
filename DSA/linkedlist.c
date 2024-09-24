#include <stdio.h>

struct Node{
  int info;
  struct Node * next;
};

void append(char * name, Node *head){
  Node* ptr = head;
  while (ptr->next!= NULL){
    ptr=ptr->next;
  }
  ptr->next= (Node*) malloc(sizeof(struct Node*));
  ptr = ptr -> next;
  ptr->name = name;
}

int main(){
  Node head;
  head.name = "Mohan";
  head.next;
}
