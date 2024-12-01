#include "CMake_lab21_7.h"

int main() {
    // Сортировка массива целых чисел
    int int_array[] = { 64, 25, 12, 22, 11 };
    int int_size = sizeof(int_array) / sizeof(int_array[0]);

    printf("Before sorting integer array\n");
    print_int_array(int_array, int_size);

    selection_sort(int_array, int_size, sizeof(int), compare_int);

    printf("After sorting integer array\n");
    print_int_array(int_array, int_size);

    // Сортировка массива структур person
    Person people[] = { {"Alice", 30}, {"Bob", 25}, {"Charlie", 35}, {"David", 20} };
    int person_size = sizeof(people) / sizeof(people[0]);

    printf("Before sorting person array\n");
    print_person_array(people, person_size);

    selection_sort(people, person_size, sizeof(Person), compare_person);

    printf("After sorting person array by age\n");
    print_person_array(people, person_size);

    return 0;
}

//обернуть в cmake, загрузить на github, и написать файл README