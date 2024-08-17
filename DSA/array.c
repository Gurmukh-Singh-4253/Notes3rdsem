// write a program to create an array and add values to it dynamically and statically

#include <stdio.h>

int main(){

  int arr1[10], arr2[10] = {0,1,2,3,4,5,6,7,8,9};

  for(int i = 0; i<10; i++){
    scanf("%d\n",&arr1[i]);
  }

  printf("The dynamic values:\n");

  for(int i = 0; i<10; i++){
    printf("%d\n",arr1[i]);
  }

  printf("The static values:\n");

  for(int i = 0; i<10; i++){
    printf("%d\n",arr2[i]);
  }

}
