#include <stdio.h>

int main () {

  int  var1;
  char var2[10];

// REVIEW: 
  int    *ip;    /* pointer to an integer */
  double *dp;    /* pointer to a double */
  float  *fp;    /* pointer to a float */
  char   *ch;     /* pointer to a character */

   printf("Address of var1 variable: %x\n", &var1  ); // ➡️ Points to the location of Var1 in Memory
   printf("Address of var2 variable: %x\n", &var2  ); // ➡️ location of Var2 in memory

   return 0;
}