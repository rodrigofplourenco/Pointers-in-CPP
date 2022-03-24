#include <stdio.h>

int main() {
  int a = 1025;
  int *p;
  p = &a;

  printf("Size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  printf("Address p + 1 = %d, value p + 1 = %d\n", p + 1, *(p + 1)); 
  // Incrementing a pointer of type integer will increment the pointer with sizeof(int), thats 4 bytes

  char *p0;
  p0 = (char*) p; // typecasting (because p is a pointer to int and p0 is a pointer to char, so we need to typecast, lets see what happens)

  printf("Size of char is %d bytes\n", sizeof(char));
  printf("Address = %d, value = %d\n", p0, *p0);
  // Why the output of value is 1?
  // 1025 (value of a) = 00000000 00000000 00000100 00000001
  // since the type char only stores 1 byte, then, the computer will assign the value of p0 as the right most byte (00000001) of the actual value of p (2025)
  // then, 00000001 in decimal is 1, thats why the output is 1
  printf("Address p0 + 1 = %d, value p0 + 1 = %d\n", p0 + 1, *(p0 + 1));
  // Incrementing a pointer of type char will increment the pointer with sizeof(char), thats 1 byte
  // an interesting thing is if we increment p0 to the next byte, it will also catch the next byte of the integer in p
  // so now the value on p0 will be 00000100, that's 4

  // What is a void pointer?
  void *p1;
  p1 = p; // it won't give us a compilation error

  // printf("Address = %d, value = %d\n", p1, *p1); 
  // this *p1 upper will give us a error since our pointer dont have a specific type to print
  printf("Address = %d\n", p1); // but we can still print the address and do arithmetic operations on it!
  printf("Address p1 + 1 = %d\n", p1 + 1);

  return 0;
}