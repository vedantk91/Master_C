#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){



    char C[5] = "John";          //always one more for null termination
    printf("%d\n",strlen(C));      //prints 4
    printf("%d\n",sizeof(C));       //prints 5


    char c1[5] ="mias";
    char* p;
    p = c1;             //this is valid because c1 is nothing but a pointer pointing to 'm'
    p[1] = 'c';
    c1[1] = 'c';               // same thing

    //c1++;          //cant be done    - cant inc an array
    p++;            //can be done to traverse
    print(c1);

}


void print(char* c){
    int i =0;

    while(c[i] != '\0'){
        printf("%c\n",c[i]);
        i++;
    }

    while(*c != '\0'){                   //same thing as c is a pointer
        printf("%c\n",*c);
        c++;
    }
}