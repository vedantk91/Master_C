#include <stdio.h>
#include <stdlib.h>

void arraysadfunctionargs(int size, int *a)
{ // array passed as function argument by ref

    for (int i; i < size; i++)
    {

        a[i] = 2 * a[i];
        //*(a+i) = 2*(*(a+i));   //same thing
    }
}

int main()
{

    int a[5] = {0, 1, 2, 3, 4};
    int size = sizeof(a) / sizeof(a[0]);
    printf("%d\n", size);
    arraysadfunctionargs(size, a); // values at a[] are automatically updated dont need to return anything
    int *ptr = &a[0];
    // int *ptr = a;           //same thing

    printf("%d\n", ptr);   // this is the same as line 10
    printf("%d\n", a);     // this is the same as line 9
    printf("%d\n", &a[0]); // this is the same as line 9 and 10

    // any array atomatically points to the first element of itself. it decays to be a pointer itself
    // for finding values

    for (int i; i < 5; i++)
    {
        printf("%d\n", *(ptr + i)); // this is the same as line 18
        printf("%d\n", a[i]);       // this is the same as line 17
        printf("%d\n", *(a + i));   // this is the same as line 17 and 18
    }

    // 2D Arrays

    int f[4][3];   // size = 4*3*sizeof int
    int *p = f;    // this is wrong this will point to a 1D array
    int *q = f[3]; // this is correct this will point

    char man[10] = "man";

    man[0] = 'n'; // this is fine
    man[1] = "n"; // this is not fine      " "  expects string with /0 termination
}
