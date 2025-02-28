// C program to Implement Custom atoi()

#include <stdio.h>

int atoi_Conversion(const char *strg)
{

    // Initialize res to 0
    int res = 0;
    int i = 0;

    // Iterate through the string strg and compute res
    while (strg[i] != '\0')
    {
        res = res * 10 + (strg[i] - '0');
        i++;
    }
    return res;
}

int main()
{
    const char strg[] = "12345";
    int value = atoi_Conversion(strg);

    // print the Converted Value
    printf("String to be Converted: %s\n", strg);
    printf("Converted to Integer: %d\n", value);
    return 0;
}