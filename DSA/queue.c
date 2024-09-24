#include <stdio.h>

void enqueue(int*queue, int*top){
  if(*top==9){
    printf("Overflow error\n");
    return;
  }
  int temp;
  printf("Enter the number to push:");
  scanf("%d",&temp);
  queue[++(*top)]=temp;
}

int dequeue(int*queue, int*top){
  int temp = queue[0];
  for(int i = 0; i<*top;i++){
    queue[i] = queue[i+1];
  }
  (*top)--;
  return temp;
}

void display(int*queue, int top){
  for(int i= 0; i<=top;i++) printf("%d\t",queue[i]);
  printf("\n");
}

int main(){
  int queue[10];
  int top = -1;
  int choice;
  int temp;
  do{
    printf("Enter the choice\n1. enqueue\n2. dequeue\n3. display\n4. Quit\n>>");
    scanf("%c",&choice);
    switch(choice){
      case(1):
        enqueue(queue,&top);
        break;
      case(2):
        dequeue(queue,&top);
        break;
      case(3):
        display(queue,top);
        break;
    }
  }while (choice != 4);
}
