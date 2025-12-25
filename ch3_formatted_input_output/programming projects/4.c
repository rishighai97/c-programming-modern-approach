/*
Write a program that prompts the user to enter a telephone number in the format (xxx)  xxx-xxxx and then display the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxxx] :  (404)  817-69000
You entered 404.817.6900
*/

#include <stdio.h>

int main(void) {
	int part1, part2, part3;
	
	printf("Enter phone number [(xxx) xxx-xxxxx] :  ");
	scanf("(%d)%d-%d", &part1, &part2, &part3); // scanf does not accept minimum field width m , precision p and left / right adjustment "-"

	printf("You entered %.3d.%.3d.%.4d\n", part1, part2, part3);
	return 0;
}
