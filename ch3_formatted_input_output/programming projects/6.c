/*
Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:

Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
*/

# include <stdio.h>

int main(void) {
	int num1, den1, num2, den2, result_num, result_den;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2); // slash cannot absorb spaces

	/*
		result = num1 / den1 + num2 / den2 = (num1 * den2 + num2 * den1) / den1 * den2
	*/

	result_num = num1 * den2 + num2 * den1;
	result_den = den1 * den2;

	printf("The sum is %d/%d\n", result_num, result_den);
	return 0;
}
