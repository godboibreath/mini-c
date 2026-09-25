#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	int F;

	printf("Far\tCelc\n");

	for(F = LOWER; F <= UPPER; F = F + STEP) {
		printf("%3d\t%3.2f\n", F, 5.0 * (F - 32.0) / 9.0);
	}

	return 0;
}
