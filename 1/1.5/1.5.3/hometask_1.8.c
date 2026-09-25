#include<stdio.h>

int main() {
	int c, spaces = 0, tabs = 0, ends = 0;

	while((c = getchar()) != EOF) {
		if(c == '\n')
			ends++;
		if(c == ' ')
			spaces++;
		if(c == '\t')
			tabs++;
	}

	printf("Ends\tSpaces\tTabs\n%d\t%d\t%d\n", ends, spaces, tabs);

	return 0;
}
