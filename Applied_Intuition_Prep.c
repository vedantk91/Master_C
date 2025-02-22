#include <stdio.h>
#include <stdlib.h> 
#include <stdint.h>
#include <stdbool.h>

uint32_t swapbytes(uint32_t data){

    uint16_t output = 0x0;
    uint16_t temp = 0x0;

    for(int i; i < 4; i++){

        temp = (data >> (8*i) ) & 0xFF;
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
    while (n) {
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
    while (n) {
        n &= (n - 1);  //unsets lsb 1
        count++;
    }
    return count;
}

uint8_t setresetbit(uint8_t controlword, uint8_t bit, bool setreset){

    uint8_t mask = 0x0;

    if (!setreset){ 
        
        controlword = controlword & ~(1 << bit);
    }
    else {
        controlword = controlword | 1 << bit;;
    }

    return controlword;
}

void print_binary(int num) {

    for (int i = 31; i >= 0; i--) {

        printf("%d", (num >> i) & 1);
    
    }
    printf("\n");
}

void bin(unsigned int n)
{
    unsigned int i;
    for (i = 1U << 31; i > 0; i = i / 2) {
        if ((n & i) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}

int swapnubers(int x, int y){

    x=x+y;
    y=x-y; //x-x+y  erase y from sum to yet x
    x=x-y; //x-(x-y)  erase x (i.e y) from sum to get y

    return x,y;
}

int main()
{
    //uint32_t ans = swapbytes (0xCC8700FC);

    uint8_t ans = setresetbit(15, 1, 0); //0x111
    print_binary(ans);
    printf("\n");
    bin(7);
    printf("\n");
    int setbits = countsetbits_naive(8);
    printf("%d\n", setbits);
}