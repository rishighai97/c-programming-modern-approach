/*
What output do the following calls of printf product?
(a) printf("%6d, %4d", 86, 1040);
(b) printf("%12.5e", 30.253);
(c) printf("%.4f", 83.162);
(d) printf("%-6.2g", .0000009979);
*/

#include <stdio.h>

int main(void) {
	printf("%6d, %4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .0000009979);
	printf("%-6.1e\n", .0000009979);
	return 0;
}

/*
ssss86,s1040
3.02530e+01 // exponents require exactly 1 not 0 digit before decimal
83.1620
1e-06s// since no digit after decimal (0) decimal is removed. 0000001179 would be 1.2e-07
1.0e-06
*/