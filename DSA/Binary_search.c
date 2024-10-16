#include "stdio.h"

int binary_search( int a[], int left, int right, int q){
	int m;
	int r;
	// Base case is if there is only one element
	if (left==right)
		if (a[left]==q)
			return left;
		else 
			return -1;

	// non base case, will have recursion
	m = (left+right)/2;
	// find how the query key compares with the middle item 
	// depending on that recurse on one of the sides only
	if ( q <= a[m])
		r = binary_search(a, left, m, q);
	else
		r = binary_search(a, m+1, right, q);
	return r;
}

int main(){
  int array[] = {11,22,30,33,40,44,55,90,99,77,80,88,99};

  int result = binary_search(array, 0, 12, 40);

  printf("result = %d\n", result);
}
