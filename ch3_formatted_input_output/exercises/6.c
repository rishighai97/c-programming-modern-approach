/*
Show how to modify the addfrac.c program of section 3.2 so that the user is allowed to enter fractions that enter fractions that contain spaces before and after each / character

Accept numerator and denominator for 2 numbers and show the division result as fraction
*/

# include <stdio.h>

int main(void) {
	int num1, den1, num2, den2, result_num, result_den;

	printf("Enter num1 / den1: ");
	scanf("%d / %d", &num1, &den1); // slash cannot absorb spaces

	printf("Enter num2 / den2: ");
	scanf("%d / %d", &num2, &den2);

	/*
		result = num1 / den1 + num2 / den2 = (num1 * den2 + num2 * den1) / den1 * den2
	*/

	result_num = num1 * den2 + num2 * den1;
	result_den = den1 * den2;

	printf("Result: %d / %d\n", result_num, result_den);
	return 0;
}

/*
Enter num1 / den1: 5 / 6
Enter num2 / den2:       3       /     4
Result: 38 / 24
*/