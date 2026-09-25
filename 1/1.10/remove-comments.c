/*
 * comment
 *
 * */ 
#include<stdio.h>
#include<stdbool.h>

int main() {
	int c, next;
	bool inside_block = 0;
	while( (c = getchar()) != EOF && (next = getchar()) != EOF) {
		if( c == '/' && next == '*' && !inside_block ) {
			inside_block = 1;
			continue;
		}

		if( c == '*' && next == '/' && inside_block ) {
			inside_block = 0;
			continue;
		}

		if(inside_block) {
			continue;
		}

		putchar(c);
		putchar(next);

	}

	if(c != EOF)
		putchar(c);

	return 0;
}
