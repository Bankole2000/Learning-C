#include<stdio.h>
#include<stdlib.h> // malloc and free
#include<limits.h> // for INT_NIN

/* 
  TODO: Test All Code Operations - 
  PUSH, POP, ADD, SUB, MUL, DIVIDE, 
  
  TODO: Find out how to reverse Values on the Stack 
  in terms of Push(), Pop(), and Swap() 

  REVIEW: Stack REPL on repl.it and implement operations
  in this file 
*/ 
typedef struct node {
  int data;
  struct node *pNext; // pointer to the next node
} node;

// Pointer to the top of the stack
node *pTop = NULL;

// Funtion prototypes
void push(int value);
int pop(); 
void add();
void sub();
void mul();
void divide();
void swap();
void clear();
void error(char* msg);
void printStack();

int main(int argc, char* argv[]) {
    push(2);
    push(4);
    printStack();
    swap();
    printStack();
    clear();
}

void push(int value) {
  if (pTop == NULL) {
     // Stack empty, just  set pTop to a new node;
     pTop = malloc(sizeof(node));
     pTop -> data = value;
     pTop -> pNext = NULL; 
  } else {
     // make a new node: 
     node *pNew = malloc(sizeof(node));
     pNew -> data = value;
     // assign this node's next pointer to the top node: 
     pNew -> pNext = pTop;
     // this node is the new top of the stack: 
     pTop = pNew; 
  }
}

int pop() {
    // is the stack empty?
  if (pTop == NULL) {
    error("Pop error: stack empty");
    return INT_MIN;
  } else {
    int retVal = pTop -> data;
    // temp pointer to top
    node *pTemp = pTop;
    // set pTop to next node; 
    pTop = pTop -> pNext;
    // free temp node; 
    free(pTemp);
    return retVal;
  }
}

void add() {
  int a = pTop -> data;
  pop();
  int b = pTop -> data;
  pop();
  push(a+b);
}

void sub() {
  int a = pTop -> data;
  pop();
  int b = pTop -> data;
  pop();
  push(b-a);
}

void mul() {
  int a = pTop -> data;
  pop();
  int b = pTop -> data;
  pop();
  push(a * b);
}

void divide() {
  // integer division: returns quotient on top of stack, 
  // remainder at second position 
  int a = pTop -> data; 
  pop();
  int b = pTop -> data; 
  pop(); 
  push(b % a); // the remainder
  push(b / a); // the quotient
}

void swap() {
  int temp = pTop -> data;
  pTop -> data = pTop -> pNext -> data; 
  pTop -> pNext -> data = temp;
}

void clear() {
  while (pTop != NULL) {
    pop();
  }
}

void printStack() {
  // get temporary pointer
  node *pTemp = pTop;
  if (pTemp == NULL) {
    error("Print error: stack empty");
    return; 
  }
  // walk down the stack, printing each value
  do {
      printf("%d", pTemp -> data);
      pTemp = pTemp -> pNext;
  } while (pTemp != NULL);
  printf("\n");
}

void error(char * msg) {
  printf("%s\n", msg);
}