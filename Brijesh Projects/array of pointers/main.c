#include<stdio.h>
#include<stdlib.h>
int b =5;

int func1(int a)
{
    printf("fnction 1 %d \n",a);
}
int func2(int a)
{
    printf("fnction 2 %d \n",a);
}


int main()
{
system("cls");

int (*function)(int);

function = &func1;
function(2);
function = &func2;
function(2);


printf("Welcome to Array of Pointers \n\n");
}