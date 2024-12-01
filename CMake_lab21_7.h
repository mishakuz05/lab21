// CMake_lab21_7.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.

#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct {
    char name[50];
    int age;
} Person;

int compare_int(const void* a, const void* b);
int compare_person(const void* a, const void* b);
void selection_sort(void* array, int n, size_t size, int (*compare)(const void*, const void*));
void print_int_array(int* array, int n);
void print_person_array(Person* array, int n);