#include<stdio.h>
#include<limits.h>
#include<float.h>

int main() {
	printf("Types range and bite size\n\n");
	char c;
	unsigned char uc;
	short s;
	unsigned short us;
	int i;
	unsigned int ui;
	long l;
	unsigned long ul;
	float f;
	double d;
	long double ld;

	printf("Range char - [%d, %d]\n", CHAR_MIN, CHAR_MAX);
	printf("Bite size char - %zu\n", sizeof(char));
	printf("Range unsigned char - %u\n", UCHAR_MAX);
	printf("Bite size unsigned char - %zu\n\n", sizeof(unsigned char));

	printf("Range short - [%d, %d]\n", SHRT_MIN, SHRT_MAX);
	printf("Bite size short - %zu\n", sizeof(s));
	printf("Range unsigned short - %u\n", SHRT_MAX);
	printf("Bite size unsigned short - %zu\n\n", sizeof(us));

	printf("Range int - [%d, %d]\n", INT_MIN, INT_MAX);
	printf("Bite size int - %zu\n", sizeof(int));
	printf("Range unsigned int - %u\n", UINT_MAX);
	printf("Bite size unsigned int - %zu\n\n", sizeof(unsigned int));

	printf("Range long - [%ld, %ld]\n", LONG_MIN, LONG_MAX);
	printf("Bite size long - %zu\n", sizeof(l));
	printf("Range unsigned long - %ld\n", LONG_MAX);
	printf("Bite size unsigned long - %zu\n\n", sizeof(ul));

	printf("Range float - [%e, %e]\n", FLT_MIN, FLT_MAX);
	printf("Bite size float - %zu\n\n", sizeof(f));

	printf("Range double - [%e, %e]\n", DBL_MIN, DBL_MAX);
	printf("Bite size double - %zu\n\n", sizeof(d));

	printf("Range long double - [%Le, %Le]\n", LDBL_MIN, LDBL_MAX);
	printf("Bite size long double - %zu\n", sizeof(ld));
	return 0;
}
