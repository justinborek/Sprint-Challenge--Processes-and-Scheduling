#include <stdio.h>
#include <stdlib.h>

int *alloc_1d(int cols)
{
    int* array = (int *) malloc(cols * sizeof(int));
    return array;
}

int main()
{
    int *my_array = alloc_1d(12);

    my_array[8] = 3490;

    // The same array access could be made with pointer arithmetic:
    *(my_array+8) = 3490;

    // By the C spec, the array notation and pointer arithmetic notation
    // are 100% equivalent.

    printf("my_array[8] = %d\n", my_array[8]);
    return 0;
}
