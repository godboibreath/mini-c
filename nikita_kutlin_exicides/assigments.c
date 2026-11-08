/* assigmants exisices */
#include<stdio.h>
#include<math.h>

int main(void) {
	// ex.#9
	float x = 1.5;
	// ex.#10
	int summa = 0;
	// ex.#13
	float x1 = 1234.4321;
	float x2 = 4321.1234;
	float x_mean = (x1 + x2) / 2;
	// ex.17
	int km = 1234;
	int km_m = 1000;
	float verst_m = 1066.8;
	float verst_from_km = (km * km_m) / verst_m;
	printf("km = %d\tverst_m=%f\tverst_from_km=%f\n", km, verst_m, verst_from_km);
	//ex.#18
	float a_rect = 567.89;
	float b_rect = 12.34;
	float s_rect = a_rect * b_rect;
	//ex.#19
	float a_triang = 56.78;
	float h_triang = 9.01;
	float s_triang = (a_triang * h_triang) / 2;
	//ex.#20	
	float a_trap = 2.34;
	float b_trap = 56.7;
	float h_trap = 8.9;
	float s_trap = (a_trap + b_trap) * h_trap / 2;
	//ex.#22
	float r_cylinder = 0.123;
	float h_cylinder = 4.5;
	float s_cylinder = 2 * M_PI * r_cylinder * (r_cylinder + h_cylinder);
	float v_cylinder = M_PI * r_cylinder * r_cylinder * h_cylinder;
	//ex.#23
	float a_parallelepiped = 6.7;
	float b_parallelepiped = 8.9;
	float c_parallelepiped = 0.12;
	float v_parallelepiped = a_parallelepiped * b_parallelepiped * c_parallelepiped;
	// to be continued...
	return 0;
}
