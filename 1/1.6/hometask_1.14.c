#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int table[128], c;
	for(int i = 0; i < 128; i++)
		table[i] = 0;

	while((c = getchar()) != EOF) {
		if(c == '\n' || c == '\t' || c == ' ') 
			continue;
		if(table[c] >= 0)
			table[c]++;
	}

	for(int i = 0; i < 128; i++) {
		if(table[i] == 0)
			continue;

		printf("%-3c*", (char)i);
		for(int j = 0; j <= table[i]; j++)
			printf("-");
		printf("|\n");
	}

	return 0;
}
