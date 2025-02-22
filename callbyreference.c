#include <stdio.h>
#include <stdlib.h>

void callbyvalue(int a){

    a = a+1;             //function creates a copy of a at address 0x200
    printf("%d\n", a);
} 

void callbyreference(int *a){

    *a = *a + 1;             //update at the address directly by derefrencing
    printf("%d\n", *a);
} 

int* callbyreferenceplusreturnptr_naive(int *a){

    int c = *a+2;
    return &c;              //WRONG &C returns address of C but it might no longer have the value of C in that address
} 

int* callbyreferenceplusreturnptr(int *a){

    int* c = (int*)malloc(sizeof(int));
    *c = *a+2;
    return c;              //THis works because using malloc C is now stored on the heap instead of stack
} 

int main(){


    int a;              // address 0x100 - local variable
    a = 10;
    callbyvalue(a); 
    printf("%d\n", a);         // this returns 10 because a is a local variable passing it in s function creats a copy proprietry to that function
    
    
    int b;              
    b = 10;
    int *ptr = &b;
    callbyreference(ptr);       //pass pointer i.e address
    printf("%d", b); 
    return 0;
}




