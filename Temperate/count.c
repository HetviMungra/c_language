#include <stdio.h>
int main() {
  int n;
  int number = 0;
  printf("Enter any number: ");
  scanf("%d", &n);
  do {
    n /= 10;
    number++;
  } while (n!= 0);

  printf("total number of digits: %d", number);
}