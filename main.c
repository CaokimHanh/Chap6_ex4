#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 80;
	char b= 'C';
	printf("\nThis is the number stored in 'a' %d", a);
	printf("\nThis is a character interpreted in 'a' %c", b);
	printf("\nThis is also a charater stored in 'b' %c", b);
	printf("\nHey! The charated of 'b' is printed as a number! %d", b);

	return 0;
}
