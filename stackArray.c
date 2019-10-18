#include<stdio.h>
 
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void menu(void);
int main()
{
    // clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100] : ");
    scanf("%d",&n);
    printf("\n ============================================== ");
    printf("\n         STACK OPERATIONS USING ARRAY");
    
    menu();
    do
    {
        printf("\n Please Select an Option: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                menu();
                break;
            }
            case 2:
            {
                pop();
                menu();
                break;
            }
            case 3:
            {
                display();
                menu();
                break;
            }
            case 4:
            {
                printf("\n EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1, 2, 3 or 4)");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n ***** STACK is in over flow ***** ");
         
    }
    else
    {
        printf(" Enter a value to be pushed (<=3 digits): ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("\n Pushed %d to stack position %d", x, top);
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n *****  Stack is In under flow *****");
    }
    else
    {
        printf("\n The popped elements is %d",stack[top]);
        printf("\n Popped %d from stack position %d", stack[top], top);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        printf(" ----------");
        for(i=top; i>=0; i--){
            printf("\n |  %3d   |",stack[i]);
            printf("\n ----------");
        };
        printf("\n\n Press Next Choice: ");
    }
    else
    {
        printf("\n ***** The STACK is empty *****");
    }
}
void menu()
{
    printf("\n        --------------------------------");
    printf("\n 1.PUSH\n 2.POP\n 3.VIEW STACK\n 4.EXIT");
}