//
// Created by Mies VanBeek on 2026-02-27.
//
#include <stdio.h>

int sort_pivot(int* main_arr, int main_size, int pivot, int* array1, int* array2) {
    int j = 0;
    int k = 0;
    for (int i = 0; i < main_size; i++) {
        if (*(main_arr + i) > pivot) {
            *(array2 + j) = *(main_arr + i);
            j++;
        }
        else {
            *(array1 + k) = *(main_arr + i);
            k++;
        }
    }

    return k;
}