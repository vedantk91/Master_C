#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Maximum possible characters in ASCII

void printDups(char str[])
{
    int count[MAX_CHAR] = {0}; // Array to store character frequencies

    // Count occurrences of each character
    for (int i = 0; i < strlen(str); i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Print characters with frequency greater than 1
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (count[i] > 1)
        {
            printf("%c, count = %d\n", i, count[i]);
        }
    }
}

int main()
{
    char str[] = "programming";
    printf("Duplicate characters in \"%s\":\n", str);
    printDups(str);
    return 0;
}