#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int jump_search(int *array, size_t size, int value);
int jump_linear_search(int *array, int low, int high, int value, int size);
int interpolation_search(int *array, size_t size, int value);


#endif
