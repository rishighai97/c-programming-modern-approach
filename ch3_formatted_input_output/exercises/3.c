/*
For each of the following pairs of scanf format strings, indicate whether or not the two strings re equivalent. If they're not, show how they can be distinguished.
(a) "%d" versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f" versus "%f "
(d) "%f,%f" versus "%f, %f"
*/

#include <stdio.h>

int main(void) {
	// printf("A:\n-------------------\n");
	// int a1, a2;
	// scanf("%d", &a1); // 10
	// scanf(" %d", &a2); // 10
	// printf("%d\n",a1); // 10
	// printf("%d\n",a2); // 10 (enter is taken as spaces.. all blanks like space, tab, etc are collapsed in one for conversion specifier or space)

	// printf("B:\n-------------------\n");
	// int b1, b2, b3, b4, b5, b6;
	// scanf("%d-%d-%d", &b1, &b2, &b3); // 10-10-10 works 10 - 10 - 10 will stop at first space since - was expected
	// scanf("%d -%d -%d", &b4, &b5, &b6); // 10-10-10 works and 10 - 10 - 10 works as well, since, space is expected before hyphen and space after hyphen is taken care by %d. 10- 10- 10 wont work
	// printf("%d	%d	%d\n", b1, b2, b3); // 10	10	10
	// printf("%d	%d	%d\n", b4, b5, b6); // 10	10	10
	// // conclusion: characters cannot ignore spaces, conversion specs can ignore spaces, spaces can take up n number of spaces

	// printf("C:\n-------------------\n");
	// float c1, c2;
	// scanf("%f", &c1); // 10
	// scanf("%f ",&c2); // 10
	// printf("%f\n", c1); // 10
	// printf("%f\n", c2); // 10 but will wait for not empty character since space is there

	printf("D:\n-------------------\n");
	float d1, d2, d3, d4;
	scanf("%f,%f", &d1, &d2); // 10,10 works | 10 ,10 does not work since comma does not wait on space | 10,  10 works since conversion specification waits on space
	scanf("%f, %f", &d3, &d4); // 10,10 works | 10, 10 works | 10 ,10 does not work since comma does not wait on space - last variable is absent
	printf("%f\t%f\t%f\t%f", d1, d2, d3, d4);
	return 0;
}