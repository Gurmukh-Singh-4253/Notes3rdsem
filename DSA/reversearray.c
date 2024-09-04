// reverse an array 

#include<stdio.h>


void reverse(int *a, int start, int end){
  int temp = a[start];
  a[start] = a[end]; 
  a[end] = temp;

  if (start-end <2) return;
  return reverse(a,start+1,end-1);
}

int main(){
  int len;
  scanf("%d",&len);
  int arr[len];
  for(int i = 0; i<len;i++){
    scanf("%d",&arr[i]);
  }

  reverse(arr,0,len-1);

  for(int i = 0; i<len;i++){
    printf("%d",arr[i]);
  }
}
