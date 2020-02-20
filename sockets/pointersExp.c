#include <stdio.h>
#include <math.h>

int main(){
//  long x = 5, y = 7;
//  long * ip1, * ip2;
//  ip1 = &x; // ip has x ADDRESS
//  ip2 = &y; 
//  printf("x = %l, and y = %l\n", x, y );
//  printf("x address (ip1) = %x and y address (ip2) = %x \n", ip1, ip2);
//  printf("contents of \'*ip1\' = %x, and \'*ip2\' = %x \n", *ip1, *ip2);
// //  *ip += 1;
// //  printf("after messing with memory x = %d \n", x);

int list[] = {1, 2, 3, 4, 5};
int *ip1, *ip2, *ip3;
ip1 = &list[0];
ip2 = &list[1];
printf("The first in the list is %i is stored in %x\n", list[0], ip1);
printf("The second number %i is stored in %x \n", list[1], ip2);
int length = sizeof(list)/sizeof(list[0]);
printf("The list has %d numbres and the Full list is: \n", length);
printf("{");
for(int i = 0; i < length; i++){
  i == length - 1 ? printf("%i", list[i]): printf("%i,", list[i]);
};
printf("}\n");
// char location[] = "61fdf8";
ip3 = ++(ip2); // 
ip3 += 2;
printf("the number in %x is %x", ip3, ++(*ip2));



// char name[] = "Anzaku";
// char * cp1, * cp2, * cp3;
// cp1 = &name[0];
// cp2 = &name[1];
// printf("The first letter %c is stored in %x\n", name[0], cp1);
// printf("The second letter %c is stored in %x \n", name[1], cp2);
// int length = sizeof(name)/sizeof(name[0]);
// printf("The name has %d letters and the Full Name is: \n", length);

// for(int i = 0; i < length; i++){
//   printf("%c", name[i]);
// };
// printf("\n");

// char location[] = "61fdf4";
// cp3 = location;
// printf("the letter in %s is %x", location, * cp3);


//printf("%c", name[6]);
// printf("%c \n", name[1]);
// printf("%c \n", name[1]);
}