#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int*)malloc(sizeof(int));        //malloc returns a void pointer int* type casts it to int pointer
    *p = 10;
    free(p);
    int *p1 = (int*)malloc(sizeof(int)*10);      //array of 10 ints
    *p1 = 10;
    p1[0] = 10;  //same thing

    int *c = (int*)calloc(10, sizeof(int));      //array of 10 ints initialized to zero

    

    //deciding size of array during runtime

    int size;
    printf("Enter the size of the array");
    //scanf("%d", &size);

    //int a[size];            //cant do
    int *a = (int*)malloc(size*sizeof(int));      //can do this

    int *a1 = (int*)realloc(a, 2*size*sizeof(int));         //to increase size of array
    int *a2 = (int*)realloc(NULL, 2*size*sizeof(int));         //equivalent to NULL
    int *p3 = (int*)realloc(p1, 0);         //equivalent to free


}