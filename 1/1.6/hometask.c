#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, state = OUT;

	while((c = getchar()) != EOF) {
		if(c != '\n' && c != '\t' && c != ' ')
			state = IN;
		else
			state = OUT;

		if(state == IN)
			printf("-");

		if(state == OUT)
			printf("|\n");

	}

	return 0;
}
