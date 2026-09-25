#include<stdio.h>

int main() {
	float F, C;
	int lower = 0, upper = 300, step = 20;
	F = lower;

	printf("Far\tCelc\n");

	while(F <= upper) {
		C = 5.0 * (F - 32.0) / 9.0;
		printf("%3.f\t%3.2f\n", F, C);
		F = F + step;
	}

	return 0;
}
