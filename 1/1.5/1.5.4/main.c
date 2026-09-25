#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, nw, nl, nc, state = OUT;
	nw = nl = nc = 0;

	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("nc=%d\tnl=%d\tnw=%d\n", nc, nl, nw);

	return 0;
}
