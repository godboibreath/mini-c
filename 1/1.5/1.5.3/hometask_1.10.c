#include<stdio.h>

const int SLASH = '\\';

int main() {
	int c;
	while((c = getchar()) != EOF) {
		if(c != '\t' && c != '\b' && c != '\\')
			putchar(c);
		if(c == '\t') {
			putchar(SLASH);
			putchar('t');
		}
		if(c == '\b') {
			putchar(SLASH);
			putchar('b');
		}
		if(c == '\\') {
			putchar(SLASH);
			putchar(SLASH);
		}
	}
	return 0;
}
