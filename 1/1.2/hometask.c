#include<stdio.h>

int main() {
	float F, C;
	int lower = 0, upper = 300, step = 20;

	printf("Celc\tFar\n");
	C = lower;

	while(C <= upper) {
		F = (9.0 * C / 5.0) + 32.0;
		printf("%3.f\t%3.f\n", C, F);
		C = C + step;
	}

	return 0;
}
