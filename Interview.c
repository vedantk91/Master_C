#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

// void testfun();
void pattern(char,int,int);

enum Day{Sun=1,Sat=2,Fri=3};

struct Player
{
  char name[15];
  int age;
};


union abc
{

int a;
int b;


}

int main()
{
//   int innnn;
//   char grade[]={};

//   scanf("%s", &grade);

//   printf("You scored: %s",grade);

//   switch (atoi(grade))
//   {
//   case 90:
//     printf("\nExcellent");
//   break;
//   case 70:
//     printf("\nshit");
//   break;
//   default:
//     printf("invalid");
//   }

// do{
  
  
//   printf("\n%d",innnn);
//   innnn++;
// } while (innnn<20);

// char symb;
// int rows;
// int columns;

// printf("symbol\n");
// scanf("%c",&symb);
// printf("rows");

// scanf("%d",&rows);
// printf("columns\n");

// scanf("%d",&columns);

// pattern(symb,rows,columns);
// printf("Hello World");
// return 0;


// double prices[]={5,6,7,8,9,3,2};
// prices[2]=10.0;

// for(int i=0; i<(sizeof(prices)/sizeof(double));i++){
// printf("%.2lf   ",prices[i]);
// }

  //testfun();

//-------------------2D Array--------------------------------//

// int numbers[2][2];

// numbers[0][0]=2;
// numbers[0][1]=6;
// numbers[1][0]=5;
// numbers[1][1]=4;


// int rowsize = sizeof(numbers)/sizeof(numbers[0]);
// int columnsize = sizeof(numbers[0])/sizeof(numbers[0][0]);

// for( int i=0; i<rowsize;i++){
// for(int j=0;j<columnsize;j++){
// printf("%d ",numbers[i][j]);
// }
// printf("\n");
// }

// char cars[][10]={"Mustang","Maruti","Honda"};

// strcpy(cars[2],"Tesla");

// for(int i=0;i<sizeof(cars)/sizeof(cars[0]);i++) printf("%s ",cars[i]);

enum Day today = Sun;

if(today==Sun){printf("Congrats");}


struct Player player3 = {"Joel",78};
struct Player player4 = {"Melina",56};
struct Player player5 = {"Homie",45};

struct Player players[] ={player3,player4,player5};

for (int i = 0; i < sizeof(players)/sizeof(players[0]); i++)
{
  printf("%s \n", players[i].name);
} 

struct  Player player1;
struct  Player player2;
char name[]="Nathan";
for(int i=0;i<7;i++){
  player1.name[i]=name[i];
}
player1.age = 67;

strcpy(player2.name,"Picollo");

printf("%s : ",player1.name);
printf("%s : ",player2.name);

printf("%d",player1.age);



}


void testfun()
{

int n=1;

label:
    printf("%d ", n);
    n++;
    if (n <= 10) goto label;

}

void pattern(char symbol, int rows, int columns){

for( int i=0; i<=rows;i++){
for(int j=0;j<=columns;j++){
printf("%c",symbol);
}
printf("\n");
}
}