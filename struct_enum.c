
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char title[10];
    char author[20];
    double price;
    int pages;
    char myLetter;
};

struct engine // chilg struct
{
    int horsepower;
};

typedef struct Car // size = 50+50+4 = 104
{
    char brand[50];
    char model[50];
    int year;
    struct engine eng; // child struct
} Cars;                // typedef use Cars instead of struct Car ..

void increment(Cars a, Cars *b) // passing struct as a pointer vs value --> pointer prefered
{
    a.year++;  // updating with value
    b->year++; // updating with pointer
}

int main()
{
    struct book book1 = {"Learn C", "Dennis Ritchie", 675.50, 325, 'v'}; // either declare values like this
    struct book book2;

    book2 = book1;

    printf("Title:  %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("Price:  %lf\n", book1.price);
    printf("Pages:  %d \n", book1.pages);
    printf("Size of book struct: %d", sizeof(struct book));

    strcpy(book1.title, "Learn C++"); // or like this
    strcpy(book1.author, "Vedant Kelkar");
    book1.price = 67.50;
    book1.myLetter = 'c';
    book1.pages = 355;

    struct book books[10]; // array of 10 books i.e structs
    Cars mercedes;
    Cars *merc = &mercedes; // struct pointer

    merc->eng.horsepower = 1000; // referencing child struct
    printf("\nHorsepower: %d\n", merc->eng.horsepower);

    Cars bmw;

    // BIT FIELDS REMAIN
    return 0;
}
