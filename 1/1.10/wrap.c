#include<stdio.h>

const int MAXLEN = 5;

void putchars(int c, int count);

int main() {
	int c, i = 0;
	while((c = getchar()) != EOF) {
		if(i == 0 && c == '\n') {
			continue;
		}

		if(c != '\n') {
			i++;
			putchar(c);
			if(i == MAXLEN) {
				i = 0;
				putchar('\n');
			}
		} else {
			i = 0;
			putchar(c);
		}
	}
}

void putchars(int c, unsigned int count) {
	if(count == 0)
		return;

	for(int i = 0; i < count; i++)
		putchar(c);
}
