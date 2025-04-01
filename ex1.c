/******************
Name:Maya Mattar
ID:213510407
Assignment:ex1-1
*******************/
#include <stdio.h>

int main() {
	int number, position;
  // What bit
  printf("What bit:\n");
  // Get user input
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  // What bit in the position of the number
  int bit = (number >> position) & 1;
  printf("The bit in position %d of number %d is: %d\n", position, number, bit);
  
  // Set bit
  printf("\nSet bit:\n");
  // Get user input
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  // Set the bit to 1
  int setOn = number | (1 << position);

  // Set the bit to 0
  int setOff = number & ~(1 << position);

  // Print results
  printf("Number with bit %d set to 1: %d\n", position, setOn);
  printf("Number with bit %d set to 0: %d\n", position, setOff);

  // Toggle bit
  printf("\nToggle bit:\n");

  // Get user input for the number and the bit position
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);

  // Toggle the bit at the given position
  int toggledNumber = number ^ (1 << position);

  // Print the result
  printf("Number with bit %d toggled: %d\n", position, toggledNumber);

  // Even - Odd
  printf("\nEven - Odd:\n");

  // Get the user to input a number
  printf("Please enter a number:\n");
  scanf("%d", &number);

  // Check if the number is even or odd
  int isEven = !(number & 1);

  // Print the result: even get 1, odd get 0
  printf("%d\n", isEven);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  int x1, x2, x3;
  int bit3, bit5, bit7, bit11;
  
  // Get the user to input two numbers, reading it as octal
  printf("Please enter the first number (octal):\n");
  scanf("%o", &x1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &x2);
  
  // Calculate the sum
  x3 = x1 + x2;
  // Extract bits at positions 3, 5, 7, 11
  bit3 = (x3 >> 3) & 1;  // Extract bit at position 3
  bit5 = (x3 >> 5) & 1;  // Extract bit at position 5
  bit7 = (x3 >> 7) & 1;  // Extract bit at position 7
  bit11 = (x3 >> 11) & 1;  // Extract bit at position 11
  // Print sum in hex, print results
  printf("The sum in hexadecimal: %X\n", x3);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);

  printf("Bye!\n");

  return 0;
}
