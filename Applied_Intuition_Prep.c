#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

uint32_t swapbytes(uint32_t data)
{

    uint16_t output = 0x0;
    uint16_t temp = 0x0;

    for (int i; i < 4; i++)
    {

        temp = (data >> (8 * i)) & 0xFF;
        output = (output << 8) | temp;
    }

    return data;
}

int unsetLSB(int n)
{
    return n & (n - 1);
}

int countsetbits_naive(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

void isKthBitSet(int n, int k)
{
    if (n & (1 << k))
        printf("SET");
    else
        printf("NOT SET");
}

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        n &= (n - 1); // unsets lsb 1
        count++;
    }
    return count;
}

uint8_t setresetbit(uint8_t controlword, uint8_t bit, bool setreset)
{

    if (!setreset)
    {

        controlword = controlword & ~(1 << bit);
    }
    else
    {
        controlword = controlword | 1 << bit;
        ;
    }

    return controlword;
}

void print_binary(int num)
{

    for (int i = 31; i >= 0; i--)
    {

        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

void bin(unsigned int n)
{
    unsigned int i;
    for (i = 1U << 31; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

int swapnubers(int x, int y)
{

    x = x + y;
    y = x - y; // x-x+y  erase y from sum to yet x
    x = x - y; // x-(x-y)  erase x (i.e y) from sum to get y

    return x, y;
}

void swapEndian(void *data, size_t size)
{ // generic approact to swap endianness
    char *byteData = (char *)data;
    for (size_t i = 0; i < size / 2; i++)
    {
        char temp = byteData[i];
        byteData[i] = byteData[size - i - 1];
        byteData[size - i - 1] = temp;
    }
}

unsigned int bigToLittle32(unsigned int value)
{
    return ((value >> 24) & 0xFF) |      // move byte 0 to byte 3
           ((value >> 8) & 0xFF00) |     // move byte 1 to byte 2
           ((value << 8) & 0xFF0000) |   // move byte 2 to byte 1
           ((value << 24) & 0xFF000000); // move byte 3 to byte 0
}

int main()
{
    // uint32_t ans = swapbytes (0xCC8700FC);

    uint8_t ans = setresetbit(15, 1, 0); // 0x111
    print_binary(ans);
    printf("\n");
    bin(7);
    printf("\n");
    int setbits = countsetbits_naive(8);
    printf("%d\n", setbits);
}