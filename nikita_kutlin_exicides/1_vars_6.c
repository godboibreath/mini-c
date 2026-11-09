/* vars ex.#6
 * square and volume cylinder compute*/
#include<stdio.h>

int main() {	

	float PI = 3.14;
	float r;
	float h;

	printf("Input radius = ");
	scanf("%f", &r);
	printf("Input height = ");
	scanf("%f", &h);
	
	float s_base = PI * r * r;
	float s_side = 2 * PI * r * h;
	float s_total = s_side + 2* s_base;

	float v_total = s_base * h;

	printf("S = %.2f\tV = %.2f\n", s_total, v_total);

	return 0;
}
