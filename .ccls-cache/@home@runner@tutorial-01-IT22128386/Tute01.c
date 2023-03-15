/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //variable declaration
  float num1,num2;

  //user data input
  printf("Enter the marks for Subject_1 = ");
  scanf("%f",&num1);

  printf("\nEnter the marks for Subject_2 = ");
  scanf("%f",&num2);

  //calculating and displaying the total and the average
  printf("\nTotal Marks Scored = %.2f\nAverage Marks = %.2f",num1+num2,(num1+num2)/2.0);
  
  return 0;
}

