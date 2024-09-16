#include <stdio.h>

int main() {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int number_of_elements = 10;
  int option;

  int pos;
  int value;

  int running = 1;
  while (running) {
    printf("Enter the choice:\n 1. Traversal\n 2. Insertion\n 3.Deletion\n "
           "4.Quit\n");
    scanf("%d", &option);
    switch (option) {
    case (1):
      for (int i = 0; i < number_of_elements; i++) {
        printf("%d,", arr[i]);
      }
      printf("\b \n");
      break;
    case (2):
      if (number_of_elements == 10) {
        printf("Array full, invalid operation.\n");
        break;
      } else if (pos > number_of_elements) {
        printf("Invalid position argument\n");
      } else {
        printf("Enter the position and value respectively\n");
        scanf("%d", &pos);
        scanf("%d", &value);
      }
      for (int i = number_of_elements - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
      }

      arr[pos] = value;
      number_of_elements++;
      break;
    case (3):
      printf("Enter the position\n");

      scanf("%d", &pos);

      if (pos > number_of_elements) {
        printf("Invalid position argument");
      }

      for (int i = pos; i < number_of_elements - 1; i++) {
        arr[i] = arr[i + 1];
      }

      number_of_elements--;

      break;
    case (4):
      printf("Goodbye!\n");
      running = 0;
      break;
    }
  }
}
