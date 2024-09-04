#include "stdio.h"

void swap(int *x, int*y){
  /**x = *x+*y;*/
  /**y = *x-*y;*/
  /**x = *x-*y;*/
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(){
  int arr[] = {30,12,22,10,15,16,7,31,36,26};
  int comps = 0, swaps = 0;

  for (int i=0; i<9; i++){
    for (int j=0; j<9-i; j++){
      if (arr[j] > arr[j+1]){
        swap(&arr[j], &arr[j+1]);
        swaps++;
      }
      comps++;
    }
  }

  for (int i=0; i<9; i++){
    printf("%d\n",arr[i]);
  }
  printf("comps = %d\n", comps);
  printf("swaps = %d\n", swaps);
}
