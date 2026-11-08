/* vars ex.#8
 * notes and cover summary costs
 * */
#include<stdio.h>

int main() {
	float notes_cost;	
	float cover_cost;
	int count;

	printf("notes_cost = ");
	scanf("%f", &notes_cost);
	printf("cover_cost = ");
	scanf("%f", &cover_cost);
	printf("both count = ");
	scanf("%d", &count);

	printf("summary cost = %.2f\n", count * (notes_cost + cover_cost));

	return 0;
}
