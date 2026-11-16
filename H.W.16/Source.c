#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "arrays.h"

int lab16(void);

int main(void) {

	setlocale(LC_CTYPE, "RUS");

	printf("ЛАБОРАТОРНАЯ РАБОТА №16\n\n");

	lab16();

	return 0;
}

int lab16(void) {

	long ltime = time(NULL) / 2;
	int stime = (unsigned)ltime;
	srand(stime);

	int size_A, size_B, size_C, size_D;

	size_A = calculate_size();
	double* array_A = (double*)malloc(size_A * sizeof(double));

	if (array_A == NULL) { printf("error\n"); return -1; }

	array_A = full_array_rand(array_A, size_A);

	printf("МАССИВ A:\n\n");
	put_array(array_A, size_A);
	printf("\n");

	size_B = calculate_size();
	double* array_B = (double*)malloc(size_B * sizeof(double));

	if (array_B == NULL) { printf("error\n"); return -1; }

	array_B = full_array_rand(array_B, size_B);

	printf("МАССИВ B:\n\n");
	put_array(array_B, size_B);
	printf("\n");

	size_C = calculate_size();
	double* array_C = (double*)malloc(size_C * sizeof(double));

	if (array_C == NULL) { printf("error\n"); return -1; }

	array_C = full_array_rand(array_C, size_C);

	printf("МАССИВ C:\n\n");
	put_array(array_C, size_C);
	printf("\n");

	size_D = minimal(size_A, size_B, size_C);
	double* array_D = (double*)malloc(size_D * sizeof(double));

	if (array_D == NULL) { printf("error\n"); return -1; }

	array_D = get_new_array(array_A, array_B, array_C, array_D, size_D);

	printf("МАССИВ D:\n\n");
	put_array(array_D, size_D);
	printf("\n");

	free(array_A);
	free(array_B);
	free(array_C);
	free(array_D);


	return 0;
}