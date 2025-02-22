#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 



int findOdd(int arr[], int);
int setbits(int);
int shiftleft(int,int);
int dectobin(unsigned n){

// while(n>0){                 //prints reverse

// printf("%d",n%2);
// n=n/2;

// }

    if (n > 1)                 //recursive function acts as a stack
        dectobin(n / 2);

    printf("%d", n % 2);

}

int main(){


// unsigned char x=4;  //100
// int y=7;  //111
// int z=0;  //000
// int w=2;  //010

// unsigned char a = x & y;
// int b= x | y;
// int c = x^y;
// int d = x<<1; //mulltiply by 2
// int e = w>>1; //divide by 2
//(x & 1) ? printf("Odd") : printf("Even");


// int num = y | (1<<1);  // num = x ORed with 1 shifted by 1 position that is 010--- 100 or 010 = 110
//x |= (1<<3);           // x=x Ored with 1 shifted by 3 positions. 1000. == 1100.

//z ^= (1<<2);             //XOR to toggle 

// int lavda = ~z;
// unsigned char h='A';
// printf("~a = %d\n", h = ~h);

// printf("%d",x);


// if (z&(1<<1)){printf("succ");}
// else printf("nope");

// int array1[] = { 12, 12, 14, 90, 14, 14, 14 };

// int n = sizeof(array1) / sizeof(array1[0]);

//     printf("The odd occurring element is %d ",
//            findOdd(array1, n));


printf("%d",shiftleft(4,3));
return 0;

}


int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

int setbits(int n){
int count=0;
while(n){

    count = count + (n&1);
    n=n>>1;
}

return count;

}


void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}


int shiftleft(int n, int pos){


    return (n<<pos | n>>(32-pos));
}

int rightshift(int n, int pos){

    return (n>>pos|n<<(32-pos));
}

int swapnubers(int x, int y){

    x=x+y;
    y=x-y; //x-x+y  erase y from sum to yet x
    x=x-y; //x-(x-y)  erase x (i.e y) from sum to get y

    return x,y;
}

bool oppositeSigns(int x, int y) 
{  
    return ((x ^ y) < 0);    //xor is positive if signs are positive
} 

int swapBits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
{
    /* Move all bits of first set to rightmost side */
    // say you want 3 bits starting from bit 4. Shift the whole number by 4 positions. 
    //Then isolate the usefull bits by masking everything else - 1<<3 gives 1000, -1 gives 0111. And 0111 with the rest of the number only keeps last 3 bits. 
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);   // 
 
    /* Move all bits of second set to rightmost side */
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);
 
    /* XOR the two sets */
    unsigned int xor = (set1 ^ set2);          //xor stores 1 where bits are diff and 0 where they are same
 
    /* Put the xor bits back to their original positions */
    xor = (xor << p1) | (xor << p2);
 
    /* XOR the 'xor' with the original number so that the 
       two sets are swapped */
    unsigned int result = x ^ xor;            //xor with 1 where bits need to be changes xor with 0 where they dont need to be changed
 
    return result;
}

int square(int n)
{
    // Base case
    if (n == 0)
        return 0;
 
    // Handle negative number
    if (n < 0)
        n = -n;
 
    // Get floor(n/2) using right shift
    int x = n >> 1;
 
    // If n is odd
    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else // If n is even
        return (square(x) << 2);
}

int togglerange(int num, int from, int to){

// for (int i = from ; i<=to; i++)
//     num ^= (1<<i);

num ^= (1<<((to-from)+1))<<from;

return num;
}

int clearlast(int num){


    num &= (num-1);
}

int swapbits(int i, int j){


    (1<<i)


}