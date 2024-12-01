// CMake_lab21_7.cpp: определяет точку входа для приложения.
//

#include "CMake_lab21_7.h"

// Функция для сравнения двух целых чисел
int compare_int(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Функция для сравнения двух структур person по возрасту
int compare_person(const void* a, const void* b) {
    return (((Person*)a)->age - ((Person*)b)->age);
}

// Универсальная функция сортировки выбором
void selection_sort(void* array, int n, size_t size, int (*compare)(const void*, const void*)) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (compare((char*)array + j * size, (char*)array + min_index * size) < 0) {
                min_index = j;
            }
        }
        //const size_t s = size;
        if (min_index != i) {
            // Обмен элементов
            char* temp = (char*)malloc(size);
            //char temp[s];
            memcpy(temp, (char*)array + i * size, size);
            memcpy((char*)array + i * size, (char*)array + min_index * size, size);
            memcpy((char*)array + min_index * size, temp, size);

            free(temp);
        }
    }
}

// Функция для печати массива целых чисел
void print_int_array(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Функция для печати массива структур person
void print_person_array(Person* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", array[i].name, array[i].age);
    }
}