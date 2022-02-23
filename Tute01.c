/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int marks, total=0, n=0;
  float avg;
   
		while(n<2)
      {
			printf("Enter subject %d marks : ", n+1);
			scanf("%d", &marks);
			n+=1;
			total += marks;
		}
		avg = total/2.0;
		printf("\nAverageof the two marks : %.2f\n", avg);
   
  return 0;
}

