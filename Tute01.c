/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2,total;
  float avg;
  printf("Enter mark 1 : ");
  scanf("%d",&m1);

  printf("Enter mark 2 : ");
  scanf("%d",&m2);

  total=m1+m2;
  avg=total/2;

  printf("Total marks : %d\n",total);
  printf("Average marks : %.2f",avg);
  
  return 0;
}

