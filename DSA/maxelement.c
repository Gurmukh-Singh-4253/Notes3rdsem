// maximum element in an array
#include <stdio.h>

int main(){
  int len; 
  scanf("%d",&len);
  int arr[len];
  for(int i = 0; i< len; i++){
    scanf("%d",&arr[i]);
  }

  int max = arr[0];
  for(int i = 0; i< len; i++){
    if(max < arr[i]) max = arr[i];
  }

  printf("%d",max);
}
