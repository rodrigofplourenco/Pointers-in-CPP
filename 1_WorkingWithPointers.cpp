#include <stdio.h>

int main() {
  int a;
  int *p; // a pointer (a variable which stores the address of memory of another variable)

  a = 10;
  p = &a; // &a is the address of a

  printf("Address which P is pointing to is %d\n", p);
  printf("Value which is on the variable who's p is pointing to is %d\n", *p); 
  printf("Address in memory of a is %d\n", &a);

  *p = 12; // Derreferencing (changing the value from the variable who's p is pointing to, in case, the variable a)

  printf("The value in a after derreferencing is %d\n", a);

  // Pointer arithmetic
  printf("Address of memory which p is pointing is %d\n", p); 

  printf("size of integer is %d bytes\n", sizeof(int)); // We can get how many a data type take of memory, in this case, 4 bytes

  // We can increase the address to the next variable of same type on memory, in this case that's 4 bytes because int take 4 bytes from memory
  // If p was 2002, now it is 2006
  printf("The address which p is pointing, after add 1, now is %d\n", p + 1); 

  // And the value which p is pointing for now, isnt the value of a anymore because it is not pointing to the address of a because we added 1 
  // Now probably it will be a garbage value
  printf("Value at address of p + 1 is %d\n", *(p + 1));
}