#include <stdio.h>
#include <stdlib.h>
int main(){


int a= 1025;
int *p;         // declaration - pointer to integer
p=&a;           // assignment-store the address of A in p (p points to a)
// int *p = &a; //both in one line


printf("%d\n",p);    //value of p i.e address of a. start of the integer(4bytes)
printf("%d\n",&a);   // address of a
printf("%d\n",&p);   // address of the pointer
printf("%d\n",*p);   // derefrencing - *p is the value at the location p points to . (checks for 4(int) bytes starting from &a).

*p = 8;  // value at the location pointed by p = 8
printf("%d\n",a);

int b=230;

*p =b;
printf("%d\n",*p);  //updates a because *p is the content of a. But p still points to a


printf("%d\n",p-1);        //skips 4 bytes because int

// char *p0;
// p0 = (char*)p;                  //typecasting
// printf("%d\n",p0);
// printf("%d\n",p0-1);    //goes 1 byte ahead
// printf("%d\n",*p0);               //prints only 1 byte of the integer
// printf("%d\n",*(p0+1));          //prints 2nd byte of the integer

// void *x;
// x = p;                                  //can directly typecast void pointer & but cannot dereference or do arithmatic

// int x = 10, y = 20;
// swap(&x, &y);
// printf("%d %d\n", x, y);

char *px;
char s[] = "Hello, Geeks, C!";
px = &s;
printf("%s\n", px);
return 0;



// float *flat;

// flat = (float*)p;
// printf("%d\n",flat);
// printf("%d\n",*flat);




// int f;
// f=18;
// self(&f);                        //passes address of f to the function
// printf("%d",f);
}


// void self(int *p2){            //this means you need to pass the address of the variable
  
// *p2 = (*p2) +1;               //derefrences the variable and takes action

// int (*p)(int);


void swap(int* x, int* y)               //passing pointers rather than variables avoids creation of copies
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int* createArr(int n)                  //returns a pointer to an integer
{
    int* arr = (int*)(malloc(n * sizeof(int)));
    return arr;                         // returns pointer to the first element of the array
}

// int arr* = (int *) malloc (n*sizeof())

