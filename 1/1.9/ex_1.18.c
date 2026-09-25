#include<stdio.h>

#define MAXLEN 5000

int readline(char line[], int maxlen);
int modify(char line[], int size);

int main() {
	char line[MAXLEN];
	int size;
	int should_paste;
	while((size = readline(line, MAXLEN)) != 0) {
		if((should_paste = modify(line, size)) != 0)
			printf("%s\n", line);
	}

	return 0;
}

int readline(char line[], int maxlen) {
	int c, i;

	for(i = 0; (c = getchar()) != EOF && c != '\n' && i < maxlen - 1; i++)	
		line[i] = c;

	if(c == '\n') {
		line[i] = '\n';
		i++;
	}

	line[i] = '\0';

	return i;
}

int modify(char line[], int size) {
	if(line[0] == '\n') {
		line[0] = '\0';
		return 0;
	}
	int i;
	for(i = size - 2; i >= 0 && (line[i] == '\t' || line[i] == ' '); i--)
		line[i] = '\0';

	if(line[0] == '\0')
		return 0;

	line[i + 1] = '\0';

	return 1;
}

