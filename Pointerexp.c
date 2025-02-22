#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[100];
    int age;
};

int main()
{

    struct person people[100];             // array of people
    struct person *personpointer = people; // struct pointer pointing to first person

    for (int i = 0; i < 100; i++)
    {

        personpointer->age = 33;             // You use . when you're dealing with variables. You use -> when you are dealing with pointers.
        strcpy(personpointer->name, "John"); // keep this in mind for assigning value to a array type in struct
        personpointer = personpointer + 1;   // increment pointer to next person in array ( mind you dont do personpointer = personpointer + sizeof(person))
    }

    struct person personexclusive;
    personexclusive.age = 32; // You use . when you're dealing with variables. You use -> when you are dealing with pointers.
    strcpy(personexclusive.name, "Misty");

    printf("%d is the age of Misty \n", personexclusive.age);

    char *px;
    char s[] = "Hello, Geeks, C!";
    px = s;             // here &s was not required: In case of a string (character array), the variable itself points to the first element of the array in question. Thus, there is no need to use the '&' operator to pass the address.
    printf("%s\n", px); // this prints string

    int *p;
    int a = 5;
    p = &a;
    printf("%d\n", p); // this prints address

    int **q = &p;          // pointer to pointer
    printf("%d\n", *(*q)); // double deref
    **q = 10;
    printf("%d", a);
}