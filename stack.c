#include<stdio.h>
int data[5], top, temp, ch, pos = 0;
int main(void){
  while(ch!=6){
    printf("\n ==========================================");
    printf("\n\n               STACK OPERATIONS           ");
    printf("\n           ---------------------------      ");
    printf("\n 1. Push ");
    printf("\n 2. Pop ");
    printf("\n 3. Peek ");
    printf("\n 4. View stack ");
    printf("\n 5. View Variable Values ");
    printf("\n 6. Exit the program ");
    printf("\n\n Please select an option: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1: if(top==4){
      printf("\n\n Stack is full");
      } else {
        printf("\n Enter data to push to stack position data[%d]: ", pos);
        scanf("%d", &temp);
        data[++top] = temp;
        pos++;
        printf("\n[ %d , %d , %d , %d , %d ]", data[0], data[1], data[2], data[3], data[4]);
      };
      break;
    case 2: if(top== -1){
      printf("\n\n Stack is empty");
      } else {
        printf("\n Pop Element: %d", data[top]);
        top--;
        pos--;
        printf("\n[ %d , %d , %d , %d , %d ]", data[0], data[1], data[2], data[3], data[4]);
      };
      break;
    case 3: if(top== -1){
      printf("\n\n Stack is empty");
      } else {
        printf("\n Peek Top Element: %d", data[top]);
      };
      break;
    case 4: 
      printf("\n Elements in stack");
      printf("\n[ %d , %d , %d , %d , %d ]", data[0], data[1], data[2], data[3], data[4]);
      break;
    default: printf("Please select a valid Option");
      break;
    }
  }
}