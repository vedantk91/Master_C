#include <stdio.h>
#include <stdlib.h>

int missing_number(int *arr, int *n)
{

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < *n; i++)
    {
        xor1 = xor1 ^ (i + 1);
    }

    for (int i = 0; i < *n - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
    }

    return xor1 ^ xor2;
}
int main()
{
    int arr[] = {1, 2, 3, 5};
    int a = 5;
    int *ptr = &a;
    printf("missing number is: %d", missing_number(arr, ptr));
}