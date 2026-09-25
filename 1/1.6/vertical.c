#include<stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORDS_COUNT 1000

int main() {
	int c, state = OUT, word_len = 0;

	int words[MAX_WORDS_COUNT], words_iterator = 0;
	for(int i = 0; i < MAX_WORDS_COUNT; words[i] = 0, i++)
		;

	while((c = getchar()) != EOF) {
		if(c != '\n' && c != '\t' && c != ' ') {
			word_len++;
			state = IN;
		}
		else if (state == IN) {
			words[words_iterator] = word_len;
			word_len = 0;
			words_iterator++;
			state = OUT;
		}
	}

	int max = 0;
	for(int i = 0; i < MAX_WORDS_COUNT; i++)
		if (words[i] > max)
			max = words[i];

	for(int lvl = max; lvl >= -1; lvl--) {
		for(int i = 0; i < MAX_WORDS_COUNT; i++){
			if(words[i] == 0)
				continue;
			if(words[i] == lvl)
				printf("---");
			if(lvl > words[i])
				printf("   ");
			if(words[i] > lvl && lvl != -1)
				printf(" | ");
			if(lvl == -1)
				printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
