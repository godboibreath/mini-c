#include<stdio.h>

int main() {
	int c = EOF;
	printf("EOF = %d\n", c);
	printf("EOF == 0 is %d\n", c == 0);
	printf("EOF == 1 is %d\n", c == 1);
	printf("EOF == -1 is %d\n", c == -1);

	return 0;
}
