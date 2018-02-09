#include <stdio.h>
#include <stdlib.h>

int **alloc_2d(int rows, int cols)
{
    int **array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
       array[i] = (int *)malloc(cols * sizeof(int));
    }
    return array;
}

int main()
{
	int **my_array = alloc_2d(5, 10);

	// First array index is row, second is column:
	my_array[2][3] = 3490;

	// The same array access could be made with pointer arithmetic:
	*(*(my_array+2)+3) = 3490;

	// By the C spec, the array notation and pointer arithmetic notation
	// are 100% equivalent.
	
	printf("my_array[2][3] = %d\n", my_array[2][3]);
    return 0;
}