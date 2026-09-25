#include<stdio.h>

#define MAXLEN 5000

int readline(char line[], int maxlen);
void reverse(char str[], int size);

int main() {
	char line[MAXLEN];
	int size;
	int should_paste;
	while((size = readline(line, MAXLEN)) != 0) {
		reverse(line, size);
		printf("%s", line);
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

void reverse(char str[], int size) {
	if(str[0] == '\n' || size == 2)
		return;
	int left = 0, right = size - 2;
	char temp;
	while(left < right) {
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;

		left++;
		right--;
	}
}

