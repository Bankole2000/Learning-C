#include <stdio.h>

int main()
{
    int num, n, newNum, c, k;
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit position you want to toggle */
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);
    /*
     * Left shifts 1, n times
     * then perform bitwise XOR with num
     */
    newNum = num ^ (1 << n); // Left shift 1 to n times, i.e. 1 << n.
    
    // Left shift 1 to n times, i.e. 1 << n.
    // Perform bitwise XOR with num and result evaluated above i.e. num ^ (1 << n);

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling bit in position %d : %d (in decimal)\n", n, num);
    printf("%d in binary is: \n", num);
      for (c = 7; c >= 0; c--)
      {
        k = num >> c;
        k & 1 ? printf("1") : printf("0");
      }
      printf("\n");
    printf("Number after toggling bit in postion %d : %d (in decimal)\n", n, newNum);
    printf("\n");
    printf("%d in binary is: \n", newNum);
    for (c = 7; c >= 0; c--)
      {
        k = newNum >> c;
        k & 1 ? printf("1") : printf("0");
      }
    return 0;
}