#include <stdio.h>

int main() {
  int x = 5;
  int* p = &x;
  *p = 6; // now x is 6

  int* *q; // here i am creating a pointer named q that will point to another pointer of type int*
  q = &p; // And i am assigning to q the address of the pointer p

  int* **r; // now i am creating a pointer to another pointer that is pointing to another pointer that is pointing to another int variable
  r = &q; // and i assign r to q that is a pointer to another pointer

  printf("The value in p is %d\n", *p); // 6
  printf("The value in q is %d\n", *q); // 6422296
  printf("The value that is in the pointer q is pointing to is %d\n", *(*q)); // 6

  printf("The value that is in the pointer r is pointing to is %d\n", *(*r)); // 6422296
  printf("The value in the pointer that r is pointing, we get it and navegate to it and take the value on it, is %d\n", *(*(*r))); // 6

  **q = 11;
  printf("x = %d\n", x); // x = 11

  ***r = 10;
  printf("x = %d\n", x); // x = 10

  *p = 12;
  printf("x = %d\n", x); // x = 12

  return 0;
}