/*
Write calls of printf that display a float variable x in the following formats.
(a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
(b) Exponential notation; right justified in a field size of 10; six digits after the decimal point.
(c) Fixed decimal notation; left justified in a field of size 8; three digits after the dedcimal point.
(d) Fixed decimal notation; right justified in a field of size 6; no digits after the decimal point.
*/
#include <stdio.h>
int main(void) {
	printf("%-8.1e\n", 12345.12); // 1.2e+04s 
	printf("%10.6e\n", 123.1); // 1.231000e+02 
	printf("%-8.3f\n", 12.3456); // 12.346ss 
	printf("%6f\n", 12345.611); // 12345.611000
	return 0;
}