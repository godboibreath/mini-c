#include<stdio.h>
#include<stdbool.h>

/*
 * comment
 *
 * */
#define CODE 0
#define LINE_COMMENT 1
#define BLOCK_COMMENT 2
#define STRING 3

int main() {
	int c, n;
	int state = CODE;

	while((c = getchar()) != EOF) {
		if((c == '"' || c == '\'') && state == CODE) {
			int cc;
			putchar(c);
			while((cc = getchar()) != EOF && cc != c)
				putchar(cc);
			putchar(c);
			continue;
		}
		if(c == '/' && state == CODE) {
			n = getchar();
			if(n == '*') {
				state = BLOCK_COMMENT;
				continue;
			}
			if(n == '/') {
				state = LINE_COMMENT;
				continue;
			}
			putchar(c);
			putchar(n);
			continue;
		}

		if(state == BLOCK_COMMENT && c == '*') {
			n = getchar();
			if(n == '/') {
				state = CODE;
				continue;
			}
		}

		if(state == LINE_COMMENT && c == '\n') {
			state = CODE;
			putchar('\n'); // comment 1
			continue;
		}
		// content

		putchar(c);
	}
	return 0;
}
