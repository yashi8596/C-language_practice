#include <stdio.h>

double main() {
	double base, height;
	printf("base , height = ?  ");
	scanf("%lf,%lf", &base, &height); //複数の入力時に空白は不要

	printf("base = %f, height = %f\n", base, height);
	return 0;
}