#include <stdio.h>
#include <stdlib.h>

struct Node{
  int info;
  struct Node * next;
};

struct Node *head = NULL;

void printlist(){
  if(head==NULL){
    printf("The linked list is empty.\n\n");
    return;
  }
  struct Node*ptr = head;
  while(ptr!=NULL){
    printf("%d\t",ptr->info);
    ptr = ptr->next;
  }
  printf("\n");
}

void append(int val){
  struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
  if (new_node == NULL) {
    printf("Memory allocation failed.\n");
    return;  
  }
  new_node->info = val;
  new_node->next = NULL;

  if (head == NULL) {
    head = new_node;
  } else {
    struct Node *ptr = head;
    while (ptr->next!=NULL) {
      ptr = ptr->next;
    }
    ptr->next = new_node;
  }
}

void insert(int val, int index){
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  new_node->info = val;
  if (index==0){
    new_node->next = head;
    head = new_node;
  } else{
    struct Node *ptr = head;
    for(int i = 0; i<index-1; i++){
      ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
  }
}

void removefromlist(int index){
  struct Node* ptr = head;
  if(index==0){
    head = head->next;
    free(ptr);
  }
  else{
    for(int i = 0; i<index-1; i++){
      ptr = ptr->next;
    }
    struct Node* temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
  }
}

int main(){
  int input;
  int val,index;
  do{
    printf("1. Output the list\n2. Append at the end of the list\n3. Append at a specified location\n4. Delete a certain node\n5. Exit the program\nEnter your choice:");
    scanf("%d",&input);
    switch(input) {
      case(1):
        printlist();
        break;
      case(2):
        printf("Enter the value no be appended at the end of the list:");
        scanf("%d",&val);
        append(val);
        break;
      case(3):
        printf("Enter the specified index at which the value has to be inserted:");
        scanf("%d",&index);
        printf("Enter the value no be appended at the specified index");
        scanf("%d",&val);
        insert(val,index);
        break;
      case(4):
        printf("Enter the specified index which has to be deleted:");
        scanf("%d",&index);
        removefromlist(index);
        break;
    }
  }while(input!=5);
}
