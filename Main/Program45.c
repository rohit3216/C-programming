/* Program to explain the concept of getch() */
#include<stdio.h>
#include<conio.h>
int main(){
    char xy;
    puts("Enter any character");
    xy = getch();                      // it do not shows the enter character on screen
    puts("Enter character is :");
    putchar(xy);
    getch();
    return(0);
}