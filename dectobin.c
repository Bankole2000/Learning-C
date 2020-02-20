#include <stdio.h>

int main()
{
  int n, c, k;

  /* 
  Decimal to binary in C programming: 
  C program to convert an integer from decimal number system 
  (base-10) to binary number system (base-2). 
  Size of an integer is assumed to be 32 bits. 
  We will use the bitwise operator "AND" to perform the desired task. 
  We right shift the original number by 31, 30, 29, ..., 1, 0 
  bits using a for loop and bitwise AND the number obtained with 1(one), 
  if the result is 1, then that bit is 1 otherwise it is 0 (zero).
  */

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    k & 1 ? printf("1") : printf("0");
  }

  printf("\n");

  return 0;
}