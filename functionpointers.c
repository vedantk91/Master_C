#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}
int main()
{

    int (*p)(int, int); // function pointer to a fn returning int
    p = &add;
    p = add; // samt thing
    int c = (*p)(3, 2);
    int d = p(3, 2); // same thing
    printf("%d", c);
}