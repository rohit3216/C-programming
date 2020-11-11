/* Program to explain the use of getche() function */
#include<stdio.h>
#include<conio.h>
int main(){
    char xy;
    puts("Enter any character: ");
    xy = getche();              
    puts("\nEnter character is: ");
    putchar(xy);
    getche();
    return(0);
}
