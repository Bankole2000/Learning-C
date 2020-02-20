#include <stdio.h>
#include <stdlib.h>

struct person {
  int age;
  char name[30];
};

int main(){
  struct person *ptr;
  int i, n;
  printf("Enter no of Persons: ");
  scanf("%d", &n);

  ptr = (struct person*)malloc(n*sizeof(struct person));
  for(i=0; i<n;++i){
    printf("Enter Name and Age respectively:\n");
    scanf("%s%d", &(ptr+i)->name, &(ptr+i)->age);
  }
  printf("Displaying Information:\n");
  for(i=0;i<n;++i){
    printf("%s\t%d\t\n", (ptr+i)->name, (ptr+i)->age);
  }
  return 0;
}