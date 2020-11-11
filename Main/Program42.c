/* Program to illustrate the use of getchar() and putchar() funcction */
#include<stdio.h>
#include<conio.h>
int main(){
    char xy;
    xy = getchar();          // gets single char only
    putch(xy);               // puts only single char 
    getch();
    return(0);
}