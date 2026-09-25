#include<stdio.h>

#define MAXLINE 500

int get_line_len(char line[], int maxline);
void copy(char from[], char to[]);

int main() {
	int max_len = 0;
	return 0;
}

int get_line_len(char line[], int maxline) {
	int c, i;

	for(i = 0; (c = getchar()) != EOF && i <= maxline && c != '\n'; i++)
		line[i] = c;

	if(c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';

	return i;
}

void copy(char from[], char to[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}
