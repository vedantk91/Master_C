#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *t;
    t = malloc(1024 * sizeof(char));
    scanf("%s", t); // Best way to input a dynamic string

    char str[100] = "Isha is my girlfriend,hello";
    char *s;

    char delims[10] = " ,.!;"; // string of all delimeters
    s = strtok(str, delims);   // It returns the pointer to the first token encountered in the string.

    while (s != NULL)

    {
        printf("%s\n", s);
        s = strtok(NULL, delims);
    }

    char *st;
    st = strtok(t, delims);
    while (st != NULL)
    {
        printf("%s\n", st);
        st = strtok(NULL, delims);
    }
}