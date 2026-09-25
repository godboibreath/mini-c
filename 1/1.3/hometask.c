#include<stdio.h>

int LOWER = 0;
int UPPER = 300;
int STEP = 20;

int main() {
	float F;

	printf("Far\tCelc\n");

	for(F = UPPER; F >= LOWER; F -= STEP) {
		printf("%3.f\t%3.2f\n", F, 5.0 * (F - 32.0) / 9.0);
	}

	return 0;
}
