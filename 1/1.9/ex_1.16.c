#include<stdio.h>

#define MAXLINE 500

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int main() {
	char longest[MAXLINE];
	char line[MAXLINE];
	int max = 0, len;

	while((len = get_line(line, MAXLINE))) {
		if(len > max) {
			max = len;
			copy(line, longest);
		}
	}

	printf("%s", longest);
	printf("LEN: %d\n", max);

	return 0;
}

int get_line(char line[], int maxline) {
	int c;
	unsigned int i, len = 0;

	for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		if(i < maxline - 1) {
			line[i] = c;
			len++;
		}

	if(c == '\n') {
		line[len] = c;
		len++;
	}
	line[len] = '\0';

	return i;
}

void copy(char from[], char to[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}
