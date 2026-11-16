#ifndef ARRAY_H
#define ARRAY_H

double* full_array_rand(double* ptr_array, int size); //заполнение массива случайными числами
int calculate_size(void); //генерация длины массива
int put_array(double* ptr_array, int size); //вывод массива
double* get_new_array(double* ptr_array_A, double* ptr_array_B, double* ptr_array_C, double* ptr_new_array, int size); //получение нового массива
int minimal(int A, int B, int C); //нахождение минимальный длины массива среди массивов A, B и C

#endif