#define XMIN 10
#define XMAX 50
#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int calculate_size(void) {

	int size;

	size = XMIN + (long)(XMAX - XMIN) * rand() / RAND_MAX;

	return size;
}

double* full_array_rand(double* ptr_array, int size) {

	for (int i = 0; i < size; i++) *(ptr_array + i) = 0.0 + (100.0) * (double)rand() / RAND_MAX;


	return ptr_array;
}

double* get_new_array(double* ptr_array_A, double* ptr_array_B, double* ptr_array_C, double* ptr_new_array, int size) {

	for (int i = 0; i < size; i++) {

		*(ptr_new_array + i) = (*(ptr_array_A + i) + *(ptr_array_B + i) + *(ptr_array_C + i)) / 3;
	}

	return ptr_new_array;
}

int put_array(double* ptr_array, int size) {

	for (int i = 0; i < size; i++) {

		printf("%d элемент: %f\n", i + 1, *(ptr_array + i));
	}

	return 0;
}

int minimal(int A, int B, int C) {

	if (A <= B && A <= C) return A;
	else if (B <= A && B <= C) return B;
	else return C;

}