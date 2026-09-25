#include<stdio.h>

const int TABSIZE = 4;

int main() {
	int c;
	int spaces = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			spaces++;
			if(spaces == TABSIZE) {
				putchar('\t');
				spaces = 0;
			}
		}
		else {
			spaces = 0;
			putchar(c);
		}
	}

	return 0;
}
