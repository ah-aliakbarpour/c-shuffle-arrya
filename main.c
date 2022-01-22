#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffleArrayOfStrings(char *arr[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        int j = rand() % size;

        char *tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void shuffleArrayInt(int *arr, int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        int j = rand() % size;

        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

int main()
{
    char *arr1[] = {"Ali","Reza","Javad"};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    shuffleArrayOfStrings(arr1, size1);

    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2)/ sizeof(arr2[0]);
    shuffleArrayInt(arr2, size2);

    /*
    for (int i = 0; i < size1; ++i)
        printf("%s\n", arr1[i]);

    printf("\n");

    for (int i = 0; i < size2; ++i)
        printf("%d\n", arr2[i]);
    */

    return 0;
}