/* Author: Ashley K. Smith
 * Solution to "C Programming: A Modern Approach" chapter 5, programming project 6
*/

#include <stdio.h>
int main(void){
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, checkDigit;

	printf("Enter the first (single) digit: ");
	scanf("%ld", &d);
	printf("Enter the first group of five digits: ");
	scanf("%ld %ld %ld %ld %ld", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%ld %ld %ld %ld %ld", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the last digit (Single check digit): ");	
	scanf("%d", &checkDigit);
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	
	if (checkDigit == (9 - ((total - 1) % 10)))
		printf("VALID\n");
	else
		printf("INVALID\n");

	return 0;
}

