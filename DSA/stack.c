#include <stdio.h>

void push(int* stack, int* top){
  if(*top==9){
    printf("Overflow error\n");
    return;
  }
  int temp;
  printf("Enter the number to push:");
  scanf("%d",&temp);
  stack[++(*top)]=temp;
}

int pop(int* stack, int *top){
  if(*top==-1){
    printf("Stack is already empty\n");
    return -1;
  }
  int temp = stack[*top];
  (*top)--;
  printf("popped the last element\n");
  return temp;
}

void display(int* stack, int top){
  for(int i= 0; i<=top;i++) printf("%d\t",stack[i]);
  printf("\n");
}

int main(){
  int stack[10];
  int top = -1;
  int choice;
  int temp;
  do{
    printf("Enter the choice\n1. push\n2. pop\n3. display\n4. Quit\n>>");
    scanf("%d",&choice);
    switch(choice){
      case(1):
        push(stack,&top);
        break;
      case(2):
        pop(stack,&top);
        break;
      case(3):
        display(stack,top);
        break;
    }
  }while (choice != 4);
}
