#include<stdio.h>

int compute_farh_from_celc(float celc);

int main() {
	float F, C;
	int lower = 0, upper = 300, step = 20;

	printf("Celc\tFar\n");
	C = lower;

	while(C <= upper) {
		F = compute_farh_from_celc(C);
		printf("%3.f\t%3.f\n", C, F);
		C = C + step;
	}

	return 0;
}

int compute_farh_from_celc(float celc){
	return (9.0 * celc / 5.0) + 32.0;
}
