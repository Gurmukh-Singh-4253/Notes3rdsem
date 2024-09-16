#include <stdio.h>

// Function to print the given array
void print_arr(int*a, int len){
  for(int i = 0; i<len; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
}

// Recursive function to call selection_sort
void selection_sort(int*a , int len){
  // Base case: length = 1
  if (len == 1){
    return;
  }

  // Find the Largest integer
  int min = 0;
  for (int i = 0; i< len; i++){
    if (a[min] > a[i]) min = i;
  }
  
  // Swap the largest with the last element
  int temp = a[0];
  a[0] = a[min];
  a[min] = temp; 
  
  // Recursive call
  selection_sort(a+1, len-1);
}

int main(){
  int len;
  scanf("%d",&len);
  int a[len];
  for ( int i = 0; i< len; i++ ){
    scanf("%d", &a[i]);
  }
  print_arr(a,len);
  selection_sort(a,len);
  print_arr(a,len);
}
