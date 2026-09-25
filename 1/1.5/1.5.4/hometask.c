#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, state = OUT;

	while((c = getchar()) != EOF) {
		if(c != '\n' && c != '\t' && c != ' ')
			state = IN;
		else if(state == IN) {
			state = OUT;
			putchar('\n');
		}
		if(state == IN)
			putchar(c);
	}


	return 0;
}
