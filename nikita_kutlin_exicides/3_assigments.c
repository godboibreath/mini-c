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
	//ex.#26
	float r1_cylin_hole = 3.4;
	float r2_cylin_hole = 5.6;
	float h_cylin_hole = 7.8;
	float v_cylin_hole = M_PI * h * (r2_cylin_hole * r2_cylin_hole - r1_cylin_hole * r1_cylin_hole);
	//ex.#27
	float r_cone = 9.012;
	float h_cone = 3.45;
	float s = r * r * h * M_PI / 3;
	//ex.#28
	int F = 67;
	float C = 5.0/9 * (F - 32);
	//ex.#29
	float U = 8.9;
	float R = 10.3;
	float I = U / R;
	//ex.#30	
	float R_reverse = U / I;
	//ex.#31
	float R1 = 4.5, R2 = 6.78, R3 = 9.12, R_total;
	R_total = R1 + R2 + R3;
	//ex.#32
	float r1 = 34.56, r2 = 78.9102;
	float r_total = r1 * r2 / (r1 + r2);
	//ex.#33
	float R_om = 23.4567;
	float R_kom = R_om * 1000;

	return 0;
}
