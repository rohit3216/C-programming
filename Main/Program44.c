/* Program to illustrate the concept of puts() with gets() function  */
#include<stdio.h>
#include<conio.h>
int main(){
    char name[20];
    puts("Enter any name");
    gets(name);                    // gets the whole string enter on screen
    puts(name);
    getch();
    return(0);
}