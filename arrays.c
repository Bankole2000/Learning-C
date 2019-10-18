/* Practice File for several classes */
#include<stdio.h>

// functions should be declared before main()
void guessNumber(int guess){
    if (guess == 555){
        printf("Correct. You guessed it!\n");
    } else if (guess < 555){
    	printf("Your guess is too low.\n");
    } else {
    	printf("Your guess is too high.\n");
    }
};

int main(void){ 
  
  // Display Hello World
  printf("Hellow World\n\n");

  // Variable Types
  // C has INT => char, int, short, long or long long, float, double, structures.
  // C does NOT have a boolean type. But boolean can be defined using the following
  #define BOOL char
  #define FALSE 0
  #define TRUE 1

  int foo; // declare variable
  int bar = 1;  // declare and assign value to variable
  int a = 0, b = 1, c = 2, d =3, e = 4, array[2] = {5, 10};  // declare and assign multiple variables
  a = b - c + d * e;  // re-assign variable to arithmetic function of other variables
  printf("%6d \n\n", a); // %d indicates variable to be inputed 'a' is a digit

  int numbers[10]; // defines a zero based array of 10 integers
  numbers[1] = 16; // assigns the value of 16 to the 1st index of the numbers array
  printf("%d is from Numbers[] while %d is from array[]\n\n", numbers[0], array[1]); // Trying to print an unassigned index of an array returns 0 
  // Variable Parameters in Printf function
  // %2d - 2 integers, %.2f - float (2 decimal places),


  // Multidimensional arrays
  // Syntax type name[size][size2][size3]...[sizeN];

  int fuu[1][2][3]; // declare foo 3-dimensional array

  char vowels[1][5] = { // declare 2-dimensional array and assign
    {'a', 'e', 'i', 'o', 'u'}
  };

  char alphabets[][5] = {  // Note, Y value must always be specified
    {'A', 'B', 'C', 'D', 'E'},
    {'a', 'b', 'c', 'd', 'e'}
  };

  char letter = alphabets[0][4]; // 5th letter from first array = E

  printf("%d is from 'letter' variable\n", letter);

  /* Example of looping through multidimensional array */
    // int grades[2][5];
		float average;
		int i;
		int j;

		// grades[0][0] = 80;
		// grades[0][1] = 70;
		// grades[0][2] = 65;
		// grades[0][3] = 89;
		// grades[0][4] = 90;

		// grades[1][0] = 85;
		// grades[1][1] = 80;
		// grades[1][2] = 80;
		// grades[1][3] = 82;
		// grades[1][4] = 87;

    // Note; A Quicker way to write the above 2D array would be
    /*
    grades[2][5] = {
      {80, 70, 65, 89, 90},
      {85, 80, 80, 82, 87}
    };*/
    // Or
    int grades[][5] = {80, 70, 65, 89, 90, 85, 80, 80, 82, 87};
  

		for (i = 0; i < 2; i++) {
			average = 0;
			
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);

       
		}

    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    
}
  // CONDITIONALS
  // COMPARATORS => ==, >, >=, <, <=, &&, ||, !=. 
    

