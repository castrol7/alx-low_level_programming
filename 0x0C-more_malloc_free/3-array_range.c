#include <stdlib.h>

/**
* array_range - creates an array of integers
*
* @min: the minimum value of the array
* @max: the maximum value of the array
*
* Return: On success, the pointer to the newly created array.
*         On failure, NULL.
*/
int *array_range(int min, int max)
{
int *arr, i;

if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);

for (i = 0; i <= max - min; i++)
arr[i] = min + i;

return (arr);
}

