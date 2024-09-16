#include <stdio.h>

void append(int value){
  struct node *nptr = malloc(sizeof(struct node));
  nptr->data = value;
  nptr->next = top;
  top = nptr;
}

struct node{
  int data; 
  struct node *next;
};

int main(){
  struct node head;
  head.data= 256;
  printf("data = %d\n",head.data);
}
